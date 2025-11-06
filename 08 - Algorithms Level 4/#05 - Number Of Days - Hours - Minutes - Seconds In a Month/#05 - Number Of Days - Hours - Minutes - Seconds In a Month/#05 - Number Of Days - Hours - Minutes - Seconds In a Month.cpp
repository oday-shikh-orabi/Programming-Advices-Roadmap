#include <iostream>
using namespace std;

bool isLeapYear(short Year)
{
    // If year is divisible by 4 and not divisible by 100
    // or if year is divisible by 400, then it is a leap year
    return (Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0);
}

short NumberOfDaysInAMonth(short Year , short Month)
{
    if (isLeapYear(Year))
    {
        int arr[] = { 0,31,29,31,30,31,30,31,31,30,31,30,31 };
        return arr[Month];
    }
    else 
    {
        int arr[] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
        return arr[Month];
    }
}

short NumberOfHoursInAMonth(short Year, short Month)
{
    return NumberOfDaysInAMonth(Year, Month) * 24;
}

int NumberOfMinutesInAMonth(short Year, short Month)
{
    return NumberOfHoursInAMonth(Year, Month) * 60;
}

int NumberOfSecondsInAMonth(short Year, short Month)
{
    return NumberOfMinutesInAMonth(Year, Month) * 60;
}

short ReadYear()
{
    short Year;
    cout << "\nPlease enter a year to check? ";
    cin >> Year;
    return Year;
}

short ReadMonth()
{
    short Year;
    cout << "\nPlease enter a Month to check? ";
    cin >> Year;
    return Year;
}

int main()
{
    short Year = ReadYear();
    short Month = ReadMonth();

    cout << "\nNumber of Days    in Year [" << Year << "] is " 
        << NumberOfDaysInAMonth(Year,Month);
    cout << "\nNumber of Hours   in Year [" << Year << "] is " 
        << NumberOfHoursInAMonth(Year, Month);
    cout << "\nNumber of Minutes in Year [" << Year << "] is " 
        << NumberOfMinutesInAMonth(Year, Month);
    cout << "\nNumber of Seconds in Year [" << Year << "] is " 
        << NumberOfSecondsInAMonth(Year, Month);

    system("pause>0");
    return 0;
}
