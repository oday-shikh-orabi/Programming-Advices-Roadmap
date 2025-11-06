#include <iostream>

using namespace std;

short ReadYear()
{
    short Number;
    cout << "\nEnter a Year? ";
    cin >> Number;
    return Number;
}

void IsLeapYear(int Year)
{
    if (Year % 400 == 0)
    {
        cout << "Yes, It's Leap Year" << endl;
    }
    else if (Year % 4 == 0 && Year % 100 != 0)
    {
        cout << "Yes, It's Leap Year" << endl;
    }
    else
    {
        cout << "No, It's Not Leap Year" << endl;

    }
}

int main()
{
    IsLeapYear(ReadYear());

    return 0;
}
