#include <iostream>
using namespace std;

enum enDaysOfWeak{Sundy = 1, Monday = 2 , Tusday = 3, Wednisday = 4 ,Thrsday = 5 , Friday =6 , Satrday = 7};
int ReadNumberInRange(string Message ,int From , int To) 
{
    short Number = 0;
    do {
        cout << Message << endl;
        cin >> Number;
    } while (Number < From || Number > To);

    return Number;
}
enDaysOfWeak ReadDay()
{
    // „»«‘—… „« »œÂ« „ ÕÊ·
    return (enDaysOfWeak)ReadNumberInRange("Please Enter Number of Day From 1 To 7 : ", 1, 7);
}
string CheckDay(enDaysOfWeak Day)
{
    switch (Day)
    {
    case enDaysOfWeak::Sundy:
        return "Sunday";

    case enDaysOfWeak::Monday:
        return "Monday";
            
    case enDaysOfWeak::Tusday:
        return "Tusday";
            
    case enDaysOfWeak::Wednisday:
        return "Wednisday";
            
    case enDaysOfWeak::Thrsday:
        return "Thrsday";
            
    case enDaysOfWeak::Friday:
        return "Friday";
            
    case enDaysOfWeak::Satrday:
        return "Satrday";

    default:
        return "Wrong Day";
    }
}
void PrintMenu()
{
    cout << "**********************************" << endl;
    cout << "1) Sunday" << endl;
    cout << "2) Monday" << endl;
    cout << "3) Tusday" << endl;
    cout << "4) Wednisday" << endl;
    cout << "5) Thrsday" << endl;
    cout << "6) Friday" << endl;
    cout << "7) Satrday" << endl;
    cout << "**********************************" << endl;

}
void PrintDay(string Day)
{
    cout << "Day Is " << Day << endl;
}
int main()
{
    PrintMenu();
    PrintDay(CheckDay(ReadDay()));

    return 0;
}
