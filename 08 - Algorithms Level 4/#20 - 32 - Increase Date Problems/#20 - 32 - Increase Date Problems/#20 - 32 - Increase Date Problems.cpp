#include <iostream>
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

void IncreaseDateByOneDay(stDate& Date)
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

    
}

void IncreaseDateByXDays(stDate& Date)
{
    int NumDaysToAdd;

    cout << "\nHow many Days Do You Want To Add To The Last Date? ";
    cin >> NumDaysToAdd;

    for (int i = 0; i < NumDaysToAdd; i++)
    {
        IncreaseDateByOneDay(Date);
    }


    cout << "\n02-Adding " << NumDaysToAdd << " days is: "
        << Date.Day << "/" << Date.Month << "/" << Date.Year;
}

void IncreaseDateByOneWeek(stDate& Date)
{
    for (int i = 0; i < 7; i++)
    {
        IncreaseDateByOneDay(Date);
    }

}

void IncreaseDateByXWeek(stDate& Date)
{
    int NumWeekToAdd;

    cout << "\nHow many Weeks Do You Want To Add To The Last Date? ";
    cin >> NumWeekToAdd;

    for (int i = 0; i < NumWeekToAdd; i++)
    {
        IncreaseDateByOneWeek(Date);
    }


    cout << "\n04-Adding " << NumWeekToAdd << " Weeks is: "
        << Date.Day << "/" << Date.Month << "/" << Date.Year << endl;
}

void IncreaseDateByOneMonth(stDate& Date)
{
    if (IsLastMonthInYear(Date.Month))
    {
        Date.Month = 1;
        Date.Year++;
    }
    else
    {
        Date.Month++;
    }

}

void IncreaseDateByXMonths(stDate& Date)
{
    int NumMonthsToAdd;

    cout << "\nHow many Months Do You Want To Add To The Last Date? ";
    cin >> NumMonthsToAdd;

    for (int i = 0; i < NumMonthsToAdd; i++)
    {
        IncreaseDateByOneMonth(Date);

    }

    cout << "\n06-Adding " << NumMonthsToAdd << " Months is: "
        << Date.Day << "/" << Date.Month << "/" << Date.Year << endl;
}

void IncreaseDateByOneYear(stDate& Date)
{
    Date.Year++;
}

void IncreaseDateByXyears(stDate& Date)
{
    int NumYearsToAdd;

    cout << "\nHow many Years Do You Want To Add To The Last Date? ";
    cin >> NumYearsToAdd;

    for (int i = 0; i < NumYearsToAdd; i++)
    {
        IncreaseDateByOneYear(Date);
    }

    cout << "\n08-Adding " << NumYearsToAdd << " Years is: "
        << Date.Day << "/" << Date.Month << "/" << Date.Year << endl;
}

void IncreaseDateByXYearsF(stDate& Date)
{
    int NumYearsToAdd;

    cout << "\nHow many Years Do You Want To Add To The Last Date? ";
    cin >> NumYearsToAdd;

    Date.Year += NumYearsToAdd;

    cout << "\n09-Adding " << NumYearsToAdd << " Years is: "
        << Date.Day << "/" << Date.Month << "/" << Date.Year << endl;
}

void IncreaseDateByOneDecade(stDate& Date)
{
    
    Date.Year += 10;

}

void IncreaseDateByXDecades(stDate& Date)
{
    int NumDecadesToAdd;

    cout << "\nHow many Decades Do You Want To Add To The Last Date? ";
    cin >> NumDecadesToAdd;

    for (int i = 0; i < NumDecadesToAdd; i++)
    {
        IncreaseDateByOneDecade(Date);
    }
    

    cout << "\n11-Adding " << NumDecadesToAdd << " Decades is: "
        << Date.Day << "/" << Date.Month << "/" << Date.Year << endl;
}

void IncreaseDateByXDecadesF(stDate& Date)
{
    int NumDecadesToAdd;

    cout << "\nHow Many Decades Do You Want To Add To The Last Date? ";
    cin >> NumDecadesToAdd;

    Date.Year += 10 * NumDecadesToAdd;


    cout << "\n11-Adding " << NumDecadesToAdd << " Decades is: "
        << Date.Day << "/" << Date.Month << "/" << Date.Year << endl;
}

void IncreaseDateByOneCentury(stDate& Date)
{

    Date.Year += 100;

}

void IncreaseDateByOneMillennium(stDate& Date)
{

    Date.Year += 1000;

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


void Print()
{
    stDate Date = ReadFullDate();

    IncreaseDateByOneDay(Date);
    cout << "\n01 - Adding one day is: "
        << Date.Day << "/" << Date.Month << "/" << Date.Year << endl;
    IncreaseDateByXDays(Date);
    IncreaseDateByOneWeek(Date);
    cout << "\n03-Adding One Week is: "
        << Date.Day << "/" << Date.Month << "/" << Date.Year << endl;
    IncreaseDateByXWeek(Date);
    IncreaseDateByOneMonth(Date);
    cout << "\n05-Adding One Month is: "
        << Date.Day << "/" << Date.Month << "/" << Date.Year << endl;
    IncreaseDateByXMonths(Date);
    IncreaseDateByOneYear(Date);
    cout << "\n07-Adding One Year is: "
        << Date.Day << "/" << Date.Month << "/" << Date.Year << endl;
    IncreaseDateByXyears(Date);
    IncreaseDateByXYearsF(Date);
    IncreaseDateByOneDecade(Date);
    cout << "\n10-Adding One Decade is: "
        << Date.Day << "/" << Date.Month << "/" << Date.Year << endl;
    IncreaseDateByXDecades(Date);
    IncreaseDateByXDecadesF(Date);
    IncreaseDateByOneCentury(Date);
    cout << "\n13-Adding One Century is: "
        << Date.Day << "/" << Date.Month << "/" << Date.Year << endl;
    IncreaseDateByOneMillennium(Date);
    cout << "\n14-Adding One Millennium is: "
        << Date.Day << "/" << Date.Month << "/" << Date.Year << endl;
}

int main()
{
    Print();

    system("pause>0");
    return 0;
}
