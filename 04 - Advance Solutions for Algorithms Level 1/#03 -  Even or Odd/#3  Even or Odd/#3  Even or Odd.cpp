#include <iostream>
using namespace std;

enum enNumbertype { Odd, Even };
int ReadNumber()
{
    int Number;
    cout << "pleas Enter Number : \n";
    cin >> Number;
    return Number;
}
enNumbertype CheckNumber(int Number)
{
    int result = Number % 2;
    if (result == 0)
    {
        return enNumbertype::Even;
    }
    else
    {
        return enNumbertype::Odd;
    }

}
void PrintTybe(enNumbertype Tybe)
{
    if (Tybe == enNumbertype::Even)
    {
        cout << "Number is Even";
    }
    else
    {
        cout << "Number is odd";
    }
}
int main()
{
    PrintTybe(CheckNumber(ReadNumber()));
}
