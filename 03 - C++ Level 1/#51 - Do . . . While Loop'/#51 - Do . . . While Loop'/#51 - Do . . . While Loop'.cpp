#include <iostream>
using namespace std;

int ReedIntNumberINRangeWhile(int From, int To)
{

    int Number;
    cout << "Please Enter Number betwen " << From << " TO " << To << " : \n";
    cin >> Number;

    while (Number < From || Number > To)
    {
        cout << "Wrong Number, Please Enter Number betwen " << From << " TO " << To << " : \n";
        cin >> Number;
    }
    return Number;
}
int ReedIntNumberINRangeDoWhile(int From, int To)
{

    int Number;
    do
    {
        cout << "Please Enter Number betwen " << From << " TO " << To << " : \n";
        cin >> Number;

    } while (Number < From || Number > To);
    
     return Number;
}

int main()
{
    cout << "The Number Is " << ReedIntNumberINRangeWhile(18, 45) << endl;
    cout << "The Number Is " << ReedIntNumberINRangeDoWhile(18, 45) << endl;

}
