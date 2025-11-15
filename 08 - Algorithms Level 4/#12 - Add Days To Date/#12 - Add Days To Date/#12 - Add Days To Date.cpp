#include <iostream>
using namespace std;

struct sDate
{
    short Year;
    short Month;
    short Day;
};

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
        TotalDays += NumberOfDaysInAMonth(i, Year);

    return TotalDays + Day;
}

/*sDate GetDateFromDayOrderInYear(short DayOrderInYear, short Year)
{
    sDate Date;

    short RemainingDays = DayOrderInYear + NumberOfDaysFromTheBeginingOfTheYear(Date.Day, Date.Month, Date.Year);

    Date.Year = Year;
    Date.Month = 1;



    while (RemainingDays > (isLeapYear(Date.Year) ? 366 : 365))
    {

        RemainingDays -= (isLeapYear(Date.Year) ? 366 : 365);
        Date.Year++;
    }
    // ÇáÝÇäßÔä íáí ÊÍÊ ÈíÍÓÈ áÓäÉ æÍÏÉ
    // ÝæÞ ÇäÊ ØÑÍÊ ßá ÇáÓäíä æÕáÊ ááÓäÉ ÇáãØáæÈÉ ÈíÒíÏ ãäåÇ ÇíÇã ãäÏÎáåÇ Úáì ÝÇäßÔä íáí ÊÍÊ æÈíÍÓÈ ÇáÊÇÑíÎ
    //  ÇäÊ åæä Úã ÊÈáÔ ãä ÈÏÇíÉ ÇáÓäÉ Ýí ÇáÇíÇã íáí ÈÊßæä ÈÇáÓäÉ ÇáÇæáì ßíÝ ÈÏß ÊÍÓÈåã ÑÇÍæ ÈÇáÚãáíÉ íáí ÝæÞ
// ÈÊÖíÝåã Úáì ÇáÇíÇã íáí ÈÏß ÊäÞÕåã ÝæÞ ÝÈíÕÑ åÇÏ ÇáÝÇäßÔä ÈíÍÓÈåã

    while (true)
    {
        short MonthDays = NumberOfDaysInAMonth(Date.Month, Date.Year);

        if (RemainingDays > MonthDays)
        {
            RemainingDays -= MonthDays;
            Date.Month++;
        }
        else
        {
            Date.Day = (short)RemainingDays;
            break;
        }
    }

    return Date;
}*/


sDate DateAddDays(short Days, sDate Date)
{
    short RemainingDays =
        Days + NumberOfDaysFromTheBeginingOfTheYear(Date.Day, Date.Month, Date.Year);

    Date.Month = 1;

    while (true)
    {
        short MonthDays = NumberOfDaysInAMonth(Date.Month, Date.Year);

        if (RemainingDays > MonthDays)
        {
            RemainingDays -= MonthDays;
            Date.Month++;

            if (Date.Month > 12)
            {
                Date.Month = 1;
                Date.Year++;
            }
        }
        else
        {
            Date.Day = RemainingDays;
            break;
        }
    }

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

sDate ReadFullDate()
{
    sDate Date;
    Date.Day = ReadDay();
    Date.Month = ReadMonth();
    Date.Year = ReadYear();
    return Date;
}

short ReadDaysToAdd()
{
    short Days;
    cout << "\nHow many days to add? ";
    cin >> Days;
    return Days;
}

int main()
{
    sDate Date = ReadFullDate();
    short Days = ReadDaysToAdd();

    Date = DateAddDays(Days, Date);

    cout << "\nDate after adding [" << Days << "] days is: ";
    cout << Date.Day << "/" << Date.Month << "/" << Date.Year;

    system("pause>0");
    return 0;
}
