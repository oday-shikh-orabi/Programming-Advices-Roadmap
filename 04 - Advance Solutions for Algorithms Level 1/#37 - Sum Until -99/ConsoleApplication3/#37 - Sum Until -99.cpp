#include <iostream>
using namespace std;

int ReadNumberAndSumit()
{
    int Number = 0, Sum = 0;

    do
    {
        cout << "Please Enter a Number : " << endl;
        Sum += Number;
        cin >> Number;

    } while (Number != -99);

    return Sum;
}
int main()
{
    cout << ReadNumberAndSumit() << endl;
}