#include <iostream>
using namespace std;

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

bool IsDate1BeforeDate2(sDate1 Date1, sDate2 Date2)
{

    /*if (Date1.Year < Date2.Year)
    {
        return true;
    }
    // ãÇ ÇÎÏÊ ßá ÇáÍÇáÇÊ åæä ãä ÇáÈÏÇíÉ Ýí ÍÇáÊíä åæä
    else if(Date1.Month< Date2.Month)
    {
        return true;
    }
    else if(Date1.Day< Date2.Day)
    {
        return true;
    }
    */

    return ((Date1.Year < Date2.Year) ? true : (Date1.Year == Date2.Year) ? (Date1.Month < Date2.Month) ? true : (Date1.Month == Date2.Month) ? (Date1.Day < Date2.Day) : true :false);
}

int main()
{
    sDate1 Date1 = ReadFullDate1();
    sDate2 Date2 = ReadFullDate2();


    if (IsDate1BeforeDate2(Date1, Date2))
        cout << "\nYes, Date1 is Less than Date2.";
    else
        cout << "\nNo, Date1 is NOT Less than Date2.";

    system("pause>0");
    return 0;
}
