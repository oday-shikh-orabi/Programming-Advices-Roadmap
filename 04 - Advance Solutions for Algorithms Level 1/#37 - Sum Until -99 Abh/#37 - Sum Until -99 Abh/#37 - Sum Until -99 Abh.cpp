#include <iostream>
#include <string>
using namespace std;


int ReadNumber(string Message)
{
    int Number;
    cout << Message << endl;
    cin >> Number;

    return Number;
}
int SumNumbers()
{
    int Counter = 1;
    int Number;
    int Sum = 0 ;
    do
    {
        Number = ReadNumber("Please Enter Number " + to_string(Counter));

        if (Number == -99)
        {
            break;
        }

        Sum += Number;
        Counter++;

    } while (Number != -99);

    return Sum;
}
int main()
{
    cout << "Result : " << SumNumbers();

    return 0;
}
