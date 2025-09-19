#include <iostream>
using namespace std;

enum enContryChoises {jordan = 1 , Syria = 2 , Iraq = 3 , Lebanon = 4 , Other = 5};
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

    if (Contry == enContryChoises::jordan)
    {
        cout << "Your Choise Is Jordan \n";
    }
    else if (Contry == enContryChoises::Syria)
    {
        cout << "Your Choise Is Syria \n";
    }
    else if (Contry == enContryChoises::Iraq)
    {
        cout << "Your Choise Is Iraq \n";
    }
    else if (Contry == enContryChoises::Lebanon)
    {
        cout << "Your Choise Is Lebanon \n";
    }
    else if (Contry == enContryChoises::Other)
    {
        cout << "Your Choise Is Other \n";
    }
    else 
    {
        cout << "Your Choise Is Other \n";
    }
}
