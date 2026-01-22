#include <iostream>
using namespace std;

struct stDate
{
    short Year;
    short Month;
    short Day;
};

struct stPeriods
{
    stDate StartDate;

    stDate EndDate;
};

bool IsDate1BeforeDate2(stDate Date1, stDate Date2)
{
    return (Date1.Year < Date2.Year) ? true :
        ((Date1.Year == Date2.Year) ?
            (Date1.Month < Date2.Month ? true :
                (Date1.Month == Date2.Month ?
                    Date1.Day < Date2.Day : false))
            : false);
}

bool IsDate1EqualDate2(stDate Date1, stDate Date2)
{
    return (Date1.Year == Date2.Year) ?
        ((Date1.Month == Date2.Month) ?
            (Date1.Day == Date2.Day ? true : false)
            : false)
        : false;
}

bool IsDate1AfterDate2(stDate Date1, stDate Date2)
{
    return (!IsDate1BeforeDate2(Date1, Date2) && !IsDate1EqualDate2(Date1, Date2));
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

bool IsOvelapPeriods(stPeriods Period1, stPeriods Period2)
{
 /* ØÈÚÇ ÇäÊ åæä ÌÈÊ ÍÇáÊíä ãä 6 ÍÇáÇÊ 
    while ( IsDate1BeforeDate2(Period1.StartDate, Period1.EndDate))
    {
        Period1.StartDate.Day++;

        if (IsDate1EqualDate2(Period1.StartDate, Period2.StartDate))
        {
            return true;
        }
        
    }

    if (IsDate1EqualDate2(Period1.EndDate, Period2.StartDate))
    {
        return true;
    }

    return false;
    */
    //befor  íÚäí ãÇİí Ôí ãÔÊÑß Èíä ÇáÊÇÑíÎíä 
    // ÇäÊ Úã ÊŞÇÑä end ÊÈÚ ÇáÇæá ãÚ Çá start ÊÈÚ ÇáËÇäí Çæ ÈÇáÚßÓ ÇäÊ ãÇ Úã ÊŞÇÑä ãä ÈÏÇíÉ ÇáÇæá áäåÇíÉ ÇáÇæá ãÚ ÈÏÇíÉ ÇáËÇäí áäåÇíÉ ÇáËÇäí 
    //  áåíß ãÇ ÑÍ íßæä İí ãÓÇæÇÉ Èíä ÇáÊÇÑíÎíä ÈÓ ÊÓÊÎÏã ÈíİæÑ
    if (IsDate1BeforeDate2(Period1.EndDate, Period2.StartDate) /* && !IsDate1EqualDate2(Period1.EndDate, Period2.StartDate)*/)
    {
        return false;
    }
    //this is faster than After
    if (IsDate1BeforeDate2(Period2.EndDate, Period1.StartDate) && !IsDate1EqualDate2(Period2.EndDate, Period1.StartDate))
    {
        return false;
    }
    
    return true;
}

int main()
{
    stPeriods Period1;

    cout << "\nEnter Period 1:";    
    cout << "\nEnter Start Date:\n";
    Period1.StartDate = ReadFullDate();
    cout << "\nEnter End Date:\n";
    Period1.EndDate = ReadFullDate();
    
    stPeriods Period2;

    cout << "\nEnter Period 2:";
    cout << "\nEnter Start Date:\n";
    Period2.StartDate = ReadFullDate();
    cout << "\nEnter End Date:\n";
    Period2.EndDate = ReadFullDate();

    if (IsOvelapPeriods(Period1, Period2))
    {
        cout << "\nYes, Periods Overlap.";
    }
    else
        cout << "\nNo, Periods are Not Overlap.";
    

    system("pause>0");
    return 0;
}
 