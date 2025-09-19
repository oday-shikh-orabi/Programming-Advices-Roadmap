#include <iostream>
using namespace std;
/*
void PrintNumbersFromNtoM(int N, int M)
{
    if (N <= M) {
        cout << N << endl;
        PrintNumbersFromNtoM(N + 1, M);
    }
}

int main() 
{
    PrintNumbersFromNtoM(1, 10);
    return 0;
}
*/
/*
void PrintNumbersFromMtoN(int M, int N)
{
    if (M >= N)
    {
        cout << M << endl;

        PrintNumbersFromMtoN(M - 1, N);
    }
    
}


int main()
{

    PrintNumbersFromMtoN(10, 1);
    return 0;
}
*/


/*
int Power(int N, int M)
{   
    static int Result = 1;
    if ( M >= 1) 
    {
        Result *= N;

        Power(N, M -1);
        
    }
    
    return Result;
}

int main()
{

    cout << Power(3, 3) << endl;
   
    return 0;
}
*/

//Abo Hadhoud

int MyPower(int Base, int Power)
{
    if (Power == 0)
        return 1;
    else
        return Base * MyPower(Base, Power - 1);
}

int main()
{
    cout << MyPower(2, 4);
    return 0;
}
