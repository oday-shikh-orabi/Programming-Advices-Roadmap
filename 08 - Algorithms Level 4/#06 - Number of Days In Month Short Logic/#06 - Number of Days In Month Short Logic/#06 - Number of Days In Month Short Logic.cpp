#include <iostream>
using namespace std;

bool isLeapYear(short Year)
{
    // If year is divisible by 4 and not divisible by 100
    // or if year is divisible by 400, then it is a leap year
    return (Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0);
}

short NumberOfDaysInAMonth(short Month, short Year)
{
    if (Month < 1 || Month > 12)
        return 0;

    short arr[13] = { 0,31,29,31,30,31,30,31,31,30,31,30,31 };
    return (isLeapYear(Year) ? arr[Month] : Month == 2 ?  28 : arr[Month]); // ÂÊ‰ ·«“„  Õÿ «·—Ì —‰ »—« »⁄œÌ‰  ” Œœ„ ‘Ê—  Â«‰œ «›
                                                                            // Ê·ﬂ‰ ·«  Õÿ «·—Ì —‰ ÃÊ«
}

short ReadMonth()
{
    short Month;
    cout << "\nPlease enter a month to check? ";
    cin >> Month;
    return Month;
}

short ReadYear()
{
    short Year;
    cout << "\nPlease enter a year to check? ";
    cin >> Year;
    return Year;
}

int main()
{
    short Year = ReadYear();
    short Month = ReadMonth();

    cout << "\nNumber of Days in Month [" << Month << "] is " << NumberOfDaysInAMonth(Month, Year);
   
    system("pause>0");
    return 0;
}
