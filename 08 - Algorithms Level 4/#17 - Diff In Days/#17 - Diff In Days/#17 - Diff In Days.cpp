#include <iostream>
using namespace std;

short DayCounter;

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

sDate1 ReadFullDate1()
{
    sDate1 Date;
    Date.Day = ReadDay();
    Date.Month = ReadMonth();
    Date.Year = ReadYear();
    return Date;
}

sDate2 ReadFullDate2()
{
    sDate2 Date;
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

short NumberOfDaysFromTheBeginingOfTheYear(short Day, short Month, short Year)
{
    short TotalDays = 0;

    for (short i = 1; i <= Month - 1; i++)
    {
        TotalDays += NumberOfDaysInAMonth(i, Year);
    }


    TotalDays += Day;

    return TotalDays;
}

bool IsDate1BeforeDate2(sDate1 Date1, sDate2 Date2)
{
    return ((Date1.Year < Date2.Year) ? true : (Date1.Year == Date2.Year) ? (Date1.Month < Date2.Month) ? true : (Date1.Month == Date2.Month) ? (Date1.Day < Date2.Day) : true : false);
}

bool IsThisTheDate(short DayInLoop, short MonthInLoop , short Year, sDate2 Date2)
{
    return (DayInLoop == Date2.Day && MonthInLoop == Date2.Month && Year == Date2.Year);
}

bool DaysCounterInMonth(short Day,short Month, short Year, sDate2 Date2)
{
    int NumberOfDays;

    NumberOfDays = NumberOfDaysInAMonth(Month, Year);


    while (Day <= NumberOfDays)
    {
        if (IsThisTheDate(Day, Month,Year,Date2))
        {
            return false;

        }
        else
        {
            DayCounter++;

        }
        Day++;

    }
    return true;   
}

void DaysFromDate1ToDate2(sDate1 Date1, sDate2 Date2)
{
    short Day = Date1.Day;
    short Month = Date1.Month;
    short Year = Date1.Year;
    // Month Counter
    DayCounter = 0;
    short dif = Date2.Year - Date1.Year;
    for (int i = 0; i <= dif ; i++)
    {
        while (Month <= 12)
        {
            if (!DaysCounterInMonth(Day, Month, Year,Date2))
            {
                break;
            }
            Day = 1;
            Month++;
        }
        Month = 1;
        Year++;
    }
   
}

int main()
{
    sDate1 Date1 = ReadFullDate1();
    sDate2 Date2 = ReadFullDate2();

    DaysFromDate1ToDate2(Date1,Date2);

    cout << DayCounter;

    system("pause>0");
    return 0;
}
