#include <iostream>
using namespace std;

enum enScreenColor { Red = 1, Green = 2, Yellow = 3, Blue = 4 };

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

    switch (ColorInput)
    {
    case enScreenColor::Red:

            system("color 4F");
            break;

    case enScreenColor::Green:

        system("color 2F");
        break;
        
    case enScreenColor::Yellow:

        system("color 6F");
        break;
    case enScreenColor::Blue:

        system("color 1F");
        break;

    default:

        system("color 4F");
        break;
    }
}