#include <iostream>
#include <iomanip>

using namespace std;

bool IsLeapYear(short Year)
{
    // if year is divisible by 4 AND not divisible by 100
    // OR if year is divisible by 400
    // then it is a leap year
    return ((Year % 400 == 0) || (Year % 4 == 0 && Year % 100 != 0));
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

string DayShortName(short DayOfWeekOrder)
{
    string arrDayNames[] = { "Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat" };
    return arrDayNames[DayOfWeekOrder];
}

short NumberOfDaysInAMonth(short Month, short Year)
{
    if (Month < 1 || Month > 12)
        return 0;

    int NumberOfDays[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    return (Month == 2) ? (IsLeapYear(Year) ? 29 : 28) : NumberOfDays[Month - 1];
}

string MonthShortName(short MonthOfYearOrder)
{
    string arrMonthNames[12] = { "Jun", "Feb", "Mar", "Epr", "May", "Jun", "Jul" , "Oug" ,"Sep" ,"Oct", "Nov" , "Des"};
    return arrMonthNames[MonthOfYearOrder];
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

void PrintMonthCalendar(short Year, short Month)
{
    string arrDayNames[7] = { "Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat" };


    cout << "_______________" << MonthShortName(Month) << "_______________\n\n";

    for (int i = 0; i < 7; i++)
    {
        cout << arrDayNames[i] + "  ";
    }
    cout << endl;

    short DayInMonth = NumberOfDaysInAMonth(Month, Year);
    string DayStart = DayShortName(DayOfWeekOrder(1, Month, Year));

    int ContDay = 1;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            if (DayStart == arrDayNames[j])
            {
                cout << setw(3) << ContDay;

                ContDay++;
            }
            else if (ContDay != 1 && ContDay <= DayInMonth)
            {
                cout << setw(3) << ContDay;

                ContDay++;
            }
            else
            {
                cout << "   ";
            }
            cout << "  ";
        }
        cout << endl;
    }
    cout << "_________________________________\n\n";
}

int main()
{
    short Year = ReadYear();
    short Month = ReadMonth();

    PrintMonthCalendar(Year, Month);


    system("pause>0");
    return 0;
}
