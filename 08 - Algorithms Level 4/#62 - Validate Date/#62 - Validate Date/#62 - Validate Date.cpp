#include <iostream>
using namespace std;

struct stDate
{
    short Year;
    short Month;
    short Day;
};

bool isLeapYear(short Year)
{
    return (Year % 4 == 0 && Year % 100 != 0) ||
        (Year % 400 == 0);
}

short NumberOfDaysInAMonth(short Month, short Year)
{
    if (Month < 1 || Month > 12)
        return 0;

    int days[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

    return (Month == 2) ?
        (isLeapYear(Year) ? 29 : 28) :
        days[Month - 1];
}

bool IsLastDayInMonth(stDate Date)
{
    return (Date.Day ==
        NumberOfDaysInAMonth(Date.Month, Date.Year));
}

bool IsLastMonthInYear(short Month)
{
    return (Month == 12);
}

stDate IncreaseDateByOneDay(stDate Date)
{
    if (IsLastDayInMonth(Date))
    {
        if (IsLastMonthInYear(Date.Month))
        {
            Date.Day = 1;
            Date.Month = 1;
            Date.Year++;
        }
        else
        {
            Date.Day = 1;
            Date.Month++;
        }
    }
    else
    {
        Date.Day++;
    }

    return Date;
}


bool IsValidateDate(stDate Date)
{
    if (Date.Year <= 0)
    {
        return false;
    }
    else if ((Date.Month < 1) || (Date.Month > 12))
    {
        return false;
    }
    else if ((Date.Day < 1) || (Date.Day > 31))
    {
        return false;
    }
    else if (Date.Day > NumberOfDaysInAMonth(Date.Month, Date.Year))
    {
        return false;
    }
    
    return true;
}

short ReadDay()
{
    short Day;
    cout << "\nPlease enter a Day? ";
    cin >> Day;
    return Day;
}

short ReadMonth()
{
    short Month;
    cout << "Please enter a Month? ";
    cin >> Month;
    return Month;
}

short ReadYear()
{
    short Year;
    cout << "Please enter a Year? ";
    cin >> Year;
    return Year;
}

stDate ReadFullDate()
{
    stDate Date;
    Date.Day = ReadDay();
    Date.Month = ReadMonth();
    Date.Year = ReadYear();
    return Date;
}


int main()
{
    cout << "\nEnter Period 1 :";
    stDate Date = ReadFullDate();

    if (IsValidateDate(Date))
    {
        cout << "\nYes, Date is valide date\n";
    }
    else
    {
        cout << "\nNo, Date is NOT valide date\n";
    }


    system("pause>0");
    return 0;
}
