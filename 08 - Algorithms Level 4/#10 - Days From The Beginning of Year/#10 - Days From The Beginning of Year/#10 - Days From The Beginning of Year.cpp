#include <iostream>
#include <cstdio>
using namespace std;

short Year;
short Month;
short Day;
short DayCounter;

bool isLeapYear(short Year)
{
    // If year is divisible by 4 and not divisible by 100
    // OR if year is divisible by 400, then it is a leap year
    return (Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0);
}

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

short NumberOfDaysInAMonth(short Month, short Year)
{
    if (Month < 1 || Month > 12)
        return 0;

    int days[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    return (Month == 2) ? (isLeapYear(Year) ? 29 : 28) : days[Month - 1];
}

bool IsThisTheDate(short DayInLoop, short MonthInLoop)
{
    return (DayInLoop == Day && MonthInLoop == Month);
}

bool DaysCounterInMonth(short Month, short Year)
{
    int NumberOfDays;
    int current = DayOfWeekOrder(1, Month, Year);

    NumberOfDays = NumberOfDaysInAMonth(Month, Year);

   

    for (int j = 1; j <= NumberOfDays; j++)
    {
        if (IsThisTheDate(j, Month))
        {
            return false;
            
        }
        else
        {
            DayCounter++;

        }
        
    }
}

void DaysFromTheBeginningOfYear(short Year)
{

    // Month Counter
    DayCounter = 1;
    for (short i = 1; i <= 12; i++)
    {
        if (!DaysCounterInMonth(i, Year))
        {
            break;
        }
    }
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
    Year = ReadYear();
    Month = ReadMonth();
    Day   = ReadDay();

    DaysFromTheBeginningOfYear(Year);

    cout << DayCounter;

    system("pause>0");
    return 0;
}
