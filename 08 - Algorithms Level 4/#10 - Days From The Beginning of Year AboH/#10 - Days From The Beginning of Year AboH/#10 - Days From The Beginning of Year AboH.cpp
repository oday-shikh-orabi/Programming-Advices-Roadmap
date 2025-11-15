#include <iostream>
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

    // ÈíÇÎÏ ãÌãæÚ ÇáÇíÇã Ýí ÇáÇÔåÑ áÞÈá ÇáÔåÑ ÇáãØáæÈ 
    // ßíÝ ÈíÚÑÝ ÚÏÏ ÇíÇã ÇÎÑ ÔåÑ Úä ØÑíÞ ÈíÖíÝ ÚÏÏ ÇáÇíÇã íáí ÏÎáåÇ ÇáãÓÊÎÏã ãÈÇÔÑÉ Úáì ãÌãæÚ ÇíÇã ÇáÔåæÑ ÇáãÇÖíÉ
    // æÇÐÇ Çæá ÔåÑ ßãÇä ãÇ ÈíÝæÊ Úá áæÈ ßáåÇ

    TotalDays += Day;

    return TotalDays;
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

    cout << "\nNumber of Days from the beginning of the year is "
        << NumberOfDaysFromTheBeginingOfTheYear(Day, Month, Year);

    system("pause>0");
    return 0;
}
