#include <iostream>

using namespace std;

short ReadYear()
{
    short Number;
    cout << "\nEnter a Year? ";
    cin >> Number;
    return Number;
}

bool IsLeapYear(short Year)
{
    // if year is divisible by 4 AND not divisible by 100
    // OR if year is divisible by 400
    // then it is a leap year
    return ((Year % 400 == 0) || (Year % 4 == 0 && Year % 100 != 0));
}

int main()
{
 
    short Year = ReadYear();

    if (IsLeapYear(Year))
    {
        cout << "Number of Days    In [" << Year << "] is " << 366      << endl;
        cout << "Number of Hours   In [" << Year << "] is " << 8748     << endl;
        cout << "Number of Minutes In [" << Year << "] is " << 527040   << endl;
        cout << "Number of Seconds In [" << Year << "] is " << 31622400 <<endl;

    }
    else
    {
        cout << "Number of Days    In [" << Year << "] is " << 365      << endl;
        cout << "Number of Hours   In [" << Year << "] is " << 8760     << endl;
        cout << "Number of Minutes In [" << Year << "] is " << 526500   << endl;
        cout << "Number of Seconds In [" << Year << "] is " << 31536000 << endl;
    }


    return 0;
}
