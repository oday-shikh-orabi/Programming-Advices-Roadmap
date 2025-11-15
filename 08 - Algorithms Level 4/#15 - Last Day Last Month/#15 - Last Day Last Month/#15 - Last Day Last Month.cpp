#include <iostream>
using namespace std;

struct sDate1
{
    short Year;
    short Month;
    short Day;
};

struct sDate2
{
    short Year;
    short Month;
    short Day;
};

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
    cout << "\nPlease enter a Month? ";
    cin >> Month;
    return Month;
}

short ReadYear()
{
    short Year;
    cout << "\nPlease enter a Year? ";
    cin >> Year;
    return Year;
}

sDate1 ReadFullDate()
{
    sDate1 Date;
    Date.Day = ReadDay();
    Date.Month = ReadMonth();
    Date.Year = ReadYear();
    return Date;
}

bool isLeapYear(short Year)
{
    return (Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0);
}


short NumberOfDaysInAMonth(short Month, short Year)
{
    if (Month < 1 || Month > 12)
        return 0;

    short days[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

    if (Month == 2)
        return isLeapYear(Year) ? 29 : 28;

    return days[Month - 1];
}


bool LastDayInMonth(sDate1 Date)
{
    return (Date.Day == NumberOfDaysInAMonth(Date.Month, Date.Year) ? true : false);
}

bool LastMonthInYear(sDate1 Date)
{
    return (Date.Month == 12 ? true : false);
}



int main()
{
    sDate1 Date1 = ReadFullDate();


    if (LastDayInMonth(Date1))
    {
        cout << "\nYes, Day is Last Day in Month.";
    }
    else
    {
        cout << "\nNo, Day is Not Last Day in Month.";
    }
    if (LastMonthInYear(Date1))
    {
        cout << "\nYes, Month is Last Month in Year.";
    }
    else
    {
        cout << "\nNo, Month is Not Last Month in Year.";
    }

    system("pause>0");
    return 0;
}
