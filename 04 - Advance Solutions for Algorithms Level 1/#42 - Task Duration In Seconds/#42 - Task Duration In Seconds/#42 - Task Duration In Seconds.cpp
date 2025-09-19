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
stTimeData ReadTimeData()
{
    stTimeData TData;
    TData.Day = ReadPositiveNumber("Please Enter Days : ");
    TData.Hour = ReadPositiveNumber("Please Enter Hour : ");
    TData.Minute = ReadPositiveNumber("Please Enter Hour : ");
    TData.Second = ReadPositiveNumber("Please Enter Hour : ");

    return TData;
}
int CalculateDuration(stTimeData TData)
{
    int DurationInSecond = 0;
    DurationInSecond += TData.Day * 24 * 3600;
    DurationInSecond += TData.Hour * 3600;
    DurationInSecond += TData.Minute * 60;
    DurationInSecond += TData.Second ;


    return DurationInSecond;
}
void PrintDurationInSecond(int DurationInSecond)
{
    cout << "Duration In Second :" << DurationInSecond << endl;

}
int main()
{
    PrintDurationInSecond(CalculateDuration(ReadTimeData()));

    return 0;
}
