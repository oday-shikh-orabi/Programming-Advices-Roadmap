#include <iostream>
#include <ctime>
using namespace std;

struct stDate
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

    return (Month == 2) ?
        (isLeapYear(Year) ? 29 : 28) :
        days[Month - 1];
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

bool IsDate1BeforeDate2(stDate Date1, stDate Date2)
{
    return (Date1.Year < Date2.Year) ? true :
        ((Date1.Year == Date2.Year) ?
            (Date1.Month < Date2.Month ? true :
                (Date1.Month == Date2.Month ?
                    Date1.Day < Date2.Day : false))
            : false);
}

short DayOfWeekOrder(short Day, short Month, short Year)
{
    short a = (14 - Month) / 12;
    short y = Year - a;
    short m = Month + (12 * a) - 2;

    // 0 = Sunday, 1 = Monday, ...
    return (Day + y + (y / 4) - (y / 100) + (y / 400) + ((31 * m) / 12)) % 7;
}

short DayOfWeekOrder(stDate Date)
{
    return DayOfWeekOrder(Date.Day, Date.Month, Date.Year);
}

string DayShortName(short DayOfWeekOrder)
{
    string arrDayNames[] = { "Sun","Mon","Tue","Wed","Thu","Fri","Sat" };
    return arrDayNames[DayOfWeekOrder];
}

bool IsWeekEnd(stDate Date)
{
    short DayIndex = DayOfWeekOrder(Date);
    return (DayIndex == 5 || DayIndex == 6);
}

bool IsBusinessDay(stDate Date)
{
    return !IsWeekEnd(Date);
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

stDate CalculateVacationReturnDate(stDate Date,int VacationDays)
{
    int BusnissDaysCount = 0;

    while (VacationDays != BusnissDaysCount)
    {

        if (IsBusinessDay(Date))
        {
            BusnissDaysCount++;
        }
        Date = IncreaseDateByOneDay(Date);

        //AllDaysCount;
        //WeekendsCount = All - Busniss; „Ê ﬂ«„· »œﬂ  Õ”» «–« ›Ì ÊÌﬂ «‰œ  Õ 
    }

    while (IsWeekEnd(Date))
    {
        Date = IncreaseDateByOneDay(Date);
    }

    return Date;


}

int main()
{
    int vacationDays;
    cout << "Vacation Starts : \n";
    stDate Date = ReadFullDate();

    cout << "\nPlease Enter Vacation Days ?\n";
    cin >> vacationDays;

    Date = CalculateVacationReturnDate(Date, vacationDays);


    //«Ì„  «·ÌÊ„ Ì·Ì »œﬂ  œ«Ê„ ›ÌÂ »⁄œ «·«Ã«“…
    cout << "\nReturn Date :"
        << DayShortName(DayOfWeekOrder(Date))
        << " , "
        << Date.Day << "/"
        << Date.Month << "/"
        << Date.Year << endl;


    system("pause>0");
    return 0;
}
