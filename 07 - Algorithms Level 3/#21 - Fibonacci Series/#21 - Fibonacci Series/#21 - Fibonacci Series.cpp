#include <iostream>
using namespace std;

void PrintFibonacciUsingLoop(short Number)
{
    int FebNumber = 0;
    int Prev2 = 0, Prev1 = 1;

    cout << Prev1 << "   ";

    for (short i = 2; i <= Number; ++i)
    {
        FebNumber = Prev1 + Prev2;
        cout << FebNumber << "   ";
        Prev2 = Prev1;
        Prev1 = FebNumber;
    }
}

/*void Fibonacci()
{
    int Prev1 = 1, Prev2 = 1, Sum = 0;

    cout << Prev2 << " " << Prev1 << " ";

    for (int i = 1; i <= 8; i++)
    {

        Sum = Prev2 + Prev1;

        Prev2 = Prev1;
        Prev1 = Sum;

        cout << Prev1 << " ";

    }
}
*/

int main()
{
    PrintFibonacciUsingLoop(10);
    system("pause>0");
}

