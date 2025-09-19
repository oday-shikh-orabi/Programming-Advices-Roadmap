#include <iostream>
using namespace std;

double MySum(double a, double b)
{
    return (a + b);
}

int MySum(int a, int b)
{
    return (a + b);
}

/*int MySum(int a, int b)
{
    return (a + b);
}*/ //Error

int MySum(int a, int b, int c)
{
    return (a + b + c);
}

int MySum(int a, int b, int c, int d)
{
    return (a + b + c + d);
}

int main()
{
    cout << MySum(10, 20) << endl;
    cout << MySum(10.1, 20.1) << endl;
    cout << MySum(10, 20, 30) << endl;
    cout << MySum(10, 20, 30, 40) << endl;

    /*cout << MySum2IntegerNumbers(10, 20) << endl;
    cout << MySum2DoubleNumbers(10.1, 20.1) << endl;
    cout << MySum3IntegerNumbers(10, 20, 30) << endl;
    cout << MySum4IntegerNumbers(10, 20, 30, 40) << endl;*/

    // cout << MYSum() 

    return 0;
}
