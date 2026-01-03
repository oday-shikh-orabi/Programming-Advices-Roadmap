#include <iostream>
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

short DayOfWeekOrder(short Day, short Month, short Year)
{
    short a, y, m;

    a = (14 - Month) / 12;
    y = Year - a;
    m = Month + (12 * a) - 2;

    // Gregorian formula:
    // 0: Sun, 1: Mon, 2: Tue, 3: Wed, 4: Thu, 5: Fri, 6: Sat
    return (Day + y + (y / 4) - (y / 100) + (y / 400) + ((31 * m) / 12)) % 7;
}

short DayOfWeekOrder(stDateNow DateNow)
{
    short a, y, m;

    a = (14 - DateNow.Month) / 12;
    y = DateNow.Year - a;
    m = DateNow.Month + (12 * a) - 2;

    // Gregorian formula:
    // 0: Sun, 1: Mon, 2: Tue, 3: Wed, 4: Thu, 5: Fri, 6: Sat
    return (DateNow.Day + y + (y / 4) - (y / 100) + (y / 400) + ((31 * m) / 12)) % 7;
}

string DayShortName(short DayOfWeekOrder)
{
    string arrDayNames[] = { "Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat" };
    return arrDayNames[DayOfWeekOrder];
}

bool isLeapYear(short Year)
{
    return (Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0);
}

bool IsDate1BeforeDate2(stDate Date1, stDate Date2)
{
    return (Date1.Year < Date2.Year) ? true : ((Date1.Year == Date2.Year) ? (Date1.Month < Date2.Month ? true : (Date1.Month == Date2.Month ? Date1.Day < Date2.Day : false)) : false);
}

short NumberOfDaysInAMonth(short Month, short Year)
{
    if (Month < 1 || Month > 12)
        return 0;

    int days[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

    if (Month == 2)
        return isLeapYear(Year) ? 29 : 28;

    return days[Month - 1];
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

short GetDifferenceInDays(stDate Date1, stDate Date2, bool IncludeEndDay = false)
{
    int Days = 0;

    while (IsDate1BeforeDate2(Date1, Date2))
    {
        Days++;
        Date1 = IncreaseDateByOneDay(Date1);
    }

    return IncludeEndDay ? ++Days : Days;
}

void IsEndOfWeek(string DayShortName)
{
    if (DayShortName == "Sat")
    {
        cout << "Yes End Of Week" << endl;
    }
    else
    {
        cout << "No Not End Of Week" << endl;
    }
}

void IsItWeekEnd(string DayShortName)
{
    if (DayShortName == "Fri" || DayShortName == "Sat")
    {
        cout << "Yes It Is a Week end." << endl;
    }
    else
    {
        cout << "No Not a Week end." << endl;
    }
}

void IsItBusnissDay(string DayShortName)
{
    if (!(DayShortName == "Fri" || DayShortName == "Sat"))
    {
        cout << "Yes It Is a BusnissDay." << endl;
    }
    else
    {
        cout << "No Not a Busniss Day." << endl;
    }
}

short DaysUntelTheEndOfWeek(short Day)
{
    short Counter = 0;

    while (Day != 6)
    {
        Counter++;
        Day++;
    }

    return Counter;
}

short DaysUntelTheEndOfMonth(stDateNow DateNow)
{
    short Counter = 0;

    while (DateNow.Day != NumberOfDaysInAMonth(DateNow.Month,DateNow.Year))
    {
        Counter++;
        DateNow.Day++;
    }

    return Counter;
}

short DaysUntelTheEndOfYear(stDateNow DateNow)
{
    stDate Date1;
    Date1.Day = DateNow.Day;
    Date1.Month = DateNow.Month;
    Date1.Year = DateNow.Year;

    stDate Date2;
    Date2.Day = 31;
    Date2.Month = 12;
    Date2.Year = DateNow.Year;

    return GetDifferenceInDays(Date1, Date2);

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
    cout << "\nPlease enter a Month? ";
    cin >> Month;
    return Month;
}

short ReadYear()
{
    short Year;
    cout << "\nPlease enter a year? ";
    cin >> Year;
    return Year;
}

int main()
{
    stDateNow DateNow;
    int DayOfWOrder;

    string DayName = DayShortName(DayOfWeekOrder(DateNow));

    cout << "Today is " << DayName << " , "
         << DateNow.Day << "/" << DateNow.Month << "/" << DateNow.Year << endl;

    cout << "\nIs It End Of Week?" << endl;
    IsEndOfWeek(DayName);
    
    cout << "\nIs It Busniss Day? " << endl;
    IsItBusnissDay(DayName);

    DayOfWOrder = DayOfWeekOrder(DateNow);

    cout << "\nDays Untel The End Of Week : " << DaysUntelTheEndOfWeek(0) << " Day(s)." << endl;

    cout << "Days Untel The End Of Week : " << DaysUntelTheEndOfMonth(DateNow) << " Day(s)." << endl;

    cout << "Days Untel The End Of Year : " << DaysUntelTheEndOfYear(DateNow) << " Day(s)." << endl;


    system("pause>0");
    return 0;
}
