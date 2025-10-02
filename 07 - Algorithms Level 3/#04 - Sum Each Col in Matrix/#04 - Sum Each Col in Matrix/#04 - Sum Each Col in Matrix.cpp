#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <cstdio>

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

int ColSum(int arr[3][3], short ColNumber, short Rows)
{
    int Sum = 0;
    for (short i = 0; i < Rows; i++)
    {
        Sum += arr[i][ColNumber];
    }
    return Sum;
}

void PrintEachColSum(int arr[3][3], short Cols, short Rows)
{
    for (short j = 0; j < Cols; j++)
    {
        cout << " Col " << j + 1 << " Sum = " << ColSum(arr, j, Rows) << endl;
    }
}

int main()
{
    // Seeds the random number generator in C++, called only once
    srand((unsigned)time(NULL));

    int arr[3][3];

    FillMatrixWithRandomNumbers(arr, 3, 3);

    cout << "\nThe following is a 3x3 random matrix:\n";
    PrintMatrix(arr, 3, 3);

    cout << "\nThe following are the sum of eash col in the matrix:\n";
    PrintEachColSum(arr, 3, 3);


    system("pause>0");

    return 0;
}
