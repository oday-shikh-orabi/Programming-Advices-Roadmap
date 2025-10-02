#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

int RandomNumber(int From, int To) {
    // Function to generate a random number
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}

string Tap(int Number)
{
    string T = "";

    for (int i = 1; i <= Number; i++)
    {
        T = T + "\t";
    }

    return T;
}

void FillMatrixWithRandomNumbers(int arr[3][3], short Rows, short Cols)
{
    for (short i = 0; i < Rows; i++) 
    {
        for (short j = 0; j < Cols; j++)
        {
            arr[i][j] = RandomNumber(1, 100);
        }
    }
}

void PrintMatrix(int arr[3][3], short Rows, short Cols)
{
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            cout << setw(3) << arr[i][j] << Tap(1);

        }
        cout << "\n";
    }
}

int ColSum(int arr[3][3], short Rows, short ColNumber)
{
    int Sum = 0;
    for (short i = 0; i < Rows; i++)
    {
        Sum += arr[i][ColNumber];
    }
    return Sum;
}

void SumMatrixColsInArry(int arr[3][3], int SumArr[3], short Rows, short Cols)
{
    for (int j = 0; j < 3; j++)
    {
        SumArr[j] = ColSum(arr, Rows, j);
    }
}//İÕáåÇ

void PrintEachColSum(int SumArr[3], short Rows, short Cols)
{
    for (short j = 0; j < Cols; j++) // ÇáÚÇãæÏ ÕİÑ æÇáÓØÑ åæ ÇáãÊÛíÑ Úã íäÒá Úáì ÇáÇÓØÑ áíÌãÚ ÇáÚÇãæÏ
    {
        cout << " Col " << j + 1 << " Sum = " << SumArr[j] << endl;
    }
}

int main()
{
    // Seeds the random number generator in C++, called only once
    srand((unsigned)time(NULL));

    int arr[3][3];
    int SumArr[3];

    FillMatrixWithRandomNumbers(arr, 3, 3);

    cout << "\nThe following is a 3x3 random matrix:\n";
    PrintMatrix(arr, 3, 3);

    SumMatrixColsInArry(arr, SumArr, 3, 3);

    cout << "\nThe following are the sum of eash col in the matrix:\n";
    PrintEachColSum(SumArr, 3, 3);


    system("pause>0");

    return 0;
}
