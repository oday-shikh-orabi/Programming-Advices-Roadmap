#include <iostream>
#include <string>
using namespace std;

string ReadNumber()
{
     int Number;
    
        cout << "Please Enter a Number : \n";
        cin >> Number;
    
        string x;
        return to_string(static_cast<int>(Number));
}
void PrintDigitsInReservedOrder(string Number)
{
    cout << endl;
    for (int i = Number.length() - 1; i >= 0 ; i--)
    {
        cout << Number[i] << endl;
    }
}
int main()
{
    PrintDigitsInReservedOrder(ReadNumber());

    return 0;
}