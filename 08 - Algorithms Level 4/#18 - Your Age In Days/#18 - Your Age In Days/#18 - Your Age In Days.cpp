#pragma warning(disable : 4996)


#include <iostream>
#include <ctime>

using namespace std;

struct stDate
{
    short Year;
    short Month;
    short Day;
};

struct stDateNow
{
    time_t t = time(0);        // get time now
    tm* now = localtime(&t);   // convert to local time struct

    short Year = now->tm_year + 1900;
    short Month = now->tm_mon + 1;
    short Day = now->tm_mday;
};

bool isLeapYear(short Year)
{
    return (Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0);
}

bool IsDate1BeforeDate2(stDate Date1, stDateNow DateNow)
{
    return (Date1.Year < DateNow.Year) ? true : ((Date1.Year == DateNow.Year) ? (Date1.Month < DateNow.Month ? true : (Date1.Month == DateNow.Month ? Date1.Day < DateNow.Day : false)) : false);
}

short NumberOfDaysInAMonth(short Month, short Year)
{
    if (Month < 1 || Month > 12)
        return 0;

    int days[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

    return (Month == 2) ? (isLeapYear(Year) ? 29 : 28) : days[Month - 1];
}

bool IsLastDayInMonth(stDate Date)
{
    return (Date.Day == NumberOfDaysInAMonth(Date.Month, Date.Year));
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
            Date.Month = 1;
            Date.Day = 1;
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

int GetDifferenceInDays(stDate Date1, stDateNow DateNow, bool IncludeEndDay = false)
{
    int Days = 0;

    while (IsDate1BeforeDate2(Date1, DateNow))
    {
        Days++;
        Date1 = IncreaseDateByOneDay(Date1);
    }

    return IncludeEndDay ? ++Days : Days;
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
    cout << "\nPlease Enter Your Date of Birth:\n";
    stDate Date1 = ReadFullDate();
    stDateNow DateNow;

    cout << "\nYour Age is : " << GetDifferenceInDays(Date1, DateNow, true) << " Day(s).";



    system("pause>0");
    return 0;
}
