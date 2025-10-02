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
            arr[i][j] = RandomNumber(1, 10);
        }
    }
}

void PrintMatrix(int arr[3][3], short Rows, short Cols)
{
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            printf("%02d ", arr[i][j]);
            cout << Tap(1);
        }
        cout << "\n";
    }
}

void PrintMiddleRowInMatrix(int MiddleRowArr[3] , int arr[3][3] , short Rows, short Cols)
{
    int MiddleRow = Rows / 2;

        for (short j = 0; j < Cols; j++)
        {
            MiddleRowArr[j] = arr[MiddleRow][j];
            printf("%02d ", MiddleRowArr[j]);
            cout << Tap(1);
        }
    
}

void PrintMiddleColInMatrix(int MiddleColArr[3], int arr[3][3], short Rows, short Cols)
{
    int MiddleCol = Cols / 2;

    for (short i = 0; i < Rows; i++)
    {
        MiddleColArr[i] = arr[i][MiddleCol];
        printf("%02d ", MiddleColArr[i]);
        cout << Tap(1);
    }
}

int main()
{
    // Seeds the random number generator in C++, called only once
    srand((unsigned)time(NULL));

    int arr[3][3];
    int MiddleRowArr[3];
    int MiddleColArr[3];


    FillMatrixWithRandomNumbers(arr, 3, 3);
    cout << "\nMatrix 1 :\n";
    PrintMatrix(arr, 3, 3);


    cout << "\nMiddle Row of Matrix is :\n";
    PrintMiddleRowInMatrix(MiddleRowArr, arr, 3, 3);

    cout << "\nMiddle Col of Matrix is :\n";
    PrintMiddleColInMatrix(MiddleColArr, arr, 3, 3);

    system("pause>0");

    return 0;
}
