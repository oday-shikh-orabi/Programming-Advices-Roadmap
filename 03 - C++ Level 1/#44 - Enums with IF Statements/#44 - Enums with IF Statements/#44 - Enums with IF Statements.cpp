#include <iostream>
using namespace std;

enum enScreenColor {Red =1 , Green = 2 , Yellow = 3 , Blue = 4 };

int main()
{
                                          // change Screen Cololer //
    cout << "***************************\n";
    cout << "Please Choise Screen Color : \n";
    cout << "1) Red \n";
    cout << "2) Green \n";
    cout << "3) Yellow \n";
    cout << "4) Blue \n";
    cout << "***************************\n\n";
    cout << "Coler Is : ";

    int ColorInput;
    cin >> ColorInput;

    enScreenColor Color;
    Color = (enScreenColor)ColorInput;

    if (Color == enScreenColor::Red)
    {
        system("color 4F");
    }
    else if (Color == enScreenColor::Green)
    {
        system("color 2F");
    }
    else if (Color == enScreenColor::Yellow)
    {
        system("color 6F");
    }
    else if (Color == enScreenColor::Blue)
    {
        system("color 1F");
    }
    else
    {
        system("color 4F");
    }

}