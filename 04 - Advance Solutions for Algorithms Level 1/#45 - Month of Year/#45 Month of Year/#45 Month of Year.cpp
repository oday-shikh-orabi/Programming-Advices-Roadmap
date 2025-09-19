#include <iostream>
using namespace std;

enum enMonthOfYear { January = 1, February = 2, March = 3, April = 4, May = 5, June = 6, July = 7, Augast = 8, 
                     September = 9, October = 10, November = 11, December = 12 };
int ReadNumberInRange(string Message, int From, int To)
{
    short Number = 0;
    do {
        cout << Message << endl;
        cin >> Number;
    } while (Number < From || Number > To);

    return Number;
}
enMonthOfYear ReadMonth()
{
    // „»«‘—… „« »œÂ« „ ÕÊ·
    return (enMonthOfYear)ReadNumberInRange("Please Enter Number of Month From 1 To 12 : ", 1,  12);
}
string CheckMonth(enMonthOfYear Month)
{
    switch (Month)
    {
    case enMonthOfYear::January:
        return "January";

    case enMonthOfYear::February:
        return "February";

    case enMonthOfYear::March:
        return "March";

    case enMonthOfYear::April:
        return "April";

    case enMonthOfYear::May:
        return "May";

    case enMonthOfYear::June:
        return "June";

    case enMonthOfYear::July:
        return "July";
        
    case enMonthOfYear::Augast:
        return "Augast";
        
    case enMonthOfYear::September:
        return "September";
        
    case enMonthOfYear::October:
        return "October";
        
    case enMonthOfYear::November:
        return "November";
        
    case enMonthOfYear::December:
        return "December";

    default:
        return "Wrong Month";
    }
}
void PrintMenu()
{
    cout << "**********************************" << endl;
    cout << "1) January" << endl;
    cout << "2) February" << endl;
    cout << "3) March" << endl;
    cout << "4) April" << endl;
    cout << "5) May" << endl;
    cout << "6) June" << endl;
    cout << "7) July" << endl;
    cout << "8) Augast" << endl;
    cout << "9) September" << endl;
    cout << "10) October" << endl;
    cout << "11) November" << endl;
    cout << "12) December" << endl;
    cout << "**********************************" << endl;

}
void PrintMonth(string Month)
{
    cout << "Month Is " << Month << endl;
}
int main()
{
    PrintMenu();
    PrintMonth(CheckMonth(ReadMonth()));

    return 0;
}
