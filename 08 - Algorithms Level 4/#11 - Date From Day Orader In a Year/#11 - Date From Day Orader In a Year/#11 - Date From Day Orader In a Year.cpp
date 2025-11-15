#include <iostream>
#include <string>

using namespace std;

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

string DateFromTotalDays(short TotalDays, short Year)
{
    short Month;
    for (Month = 1; Month <= 12 ; Month++)
    {
        if (TotalDays < 31)
        {
            break;
        }
        else
        {
            TotalDays -= NumberOfDaysInAMonth(Month, Year);

        }
    }

    short Day;

    Day = TotalDays;


    string Date =to_string( Day ) + "/" + to_string(Month) + "/" + to_string(Year) + "\n";

    return Date;
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
    cout << "\nPlease enter a Year? ";
    cin >> Year;
    return Year;
}

int main()
{
    short Day = ReadDay();
    short Month = ReadMonth();
    short Year = ReadYear();

    short TotalDays = NumberOfDaysFromTheBeginingOfTheYear(Day, Month, Year);


    cout << "\nNumber of Days from the beginning of the year is " << TotalDays;

    cout << endl;
    cout << DateFromTotalDays(TotalDays,Year);

    system("pause>0");
    return 0;
}
