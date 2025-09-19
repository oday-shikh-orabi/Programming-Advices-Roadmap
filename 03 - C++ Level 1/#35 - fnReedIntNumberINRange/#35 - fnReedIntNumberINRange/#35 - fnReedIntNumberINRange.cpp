#include <iostream>
using namespace std;

int ReedIntNumberINRange(int From, int To)
{

    int Number;
    cout << "Please Enter Number betwen " << From << " TO " << To << " : \n" ;
    cin >> Number;

    while (Number < From || Number > To)
    {
        cout << "Wrong Number, Please Enter Number betwen " << From << " TO " << To << " : \n";
        cin >> Number;
    }
    return Number;
}
int main()
{
    cout << "The Number Is " << ReedIntNumberINRange(18, 45) << endl;
}
