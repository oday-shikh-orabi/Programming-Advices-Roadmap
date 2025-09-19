#include <iostream>
using namespace std;

enum enContryChoises { jordan = 1, Syria = 2, Iraq = 3, Lebanon = 4, Other = 5 };
int main()
{
    // Contry Choises //
    cout << "***************************\n";
    cout << "1) jordan \n";
    cout << "2) Syria \n";
    cout << "3) Iraq \n";
    cout << "4) Lebanon \n";
    cout << "5) Other \n";
    cout << "***************************\n\n";
    cout << "Contry : ";

    int ContryChoise;
    cin >> ContryChoise;
    cout << "\n";

    enContryChoises Contry;
    Contry = (enContryChoises)ContryChoise;

    switch (Contry)
    {
    case enContryChoises::jordan:

        cout << "Your Choise Is Jordan \n";
        break;

    case enContryChoises::Syria:

        cout << "Your Choise Is Syria \n";
        break;

    case enContryChoises::Iraq:
        cout << "Your Choise Is Iraq \n";
        break;
    case enContryChoises::Lebanon:

        cout << "Your Choise Is Lebanon \n";
        break;
    case enContryChoises::Other:
        cout << "Your Choise Is Other \n";
        break;
    default:

        cout << "Your Choise Is Other \n";
        break;
    }
}