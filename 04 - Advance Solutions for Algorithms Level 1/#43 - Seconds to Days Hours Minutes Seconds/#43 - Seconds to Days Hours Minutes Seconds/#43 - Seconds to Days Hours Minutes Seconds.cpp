#include <iostream>
using namespace std;

struct stTimeData
{
    float Day, Hour, Minute, Second;
};
float ReadPositiveNumber(string Message) {
    float Number = 0;
    do {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);

    return Number;
}
int ReadTimeData()
{
    
    int Second = ReadPositiveNumber("Please Enter Second : ");

    return Second;
}
stTimeData CalculateDuration(int Second)
{
    int x;
    stTimeData TData;
    TData.Day = floor(Second / (60 * 60 * 24));
    Second %= (60 * 60 * 24);
    TData.Hour = Second / (60 * 60);
    Second %= (60 * 60 );
    TData.Minute = Second / 60;
    Second %= 60;
    TData.Second = Second;

    return TData;
}
void PrintResult(stTimeData TData)
{
    cout << TData.Day << " " << TData.Hour << " " << TData.Minute << " " << TData.Second;
}
int main()
{
    PrintResult(CalculateDuration(ReadTimeData()));
}
