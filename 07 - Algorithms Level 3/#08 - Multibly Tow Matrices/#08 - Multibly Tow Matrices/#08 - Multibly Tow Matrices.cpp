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

void FillMatrixWithRandomNumbers(int arr1[3][3], short Rows, short Cols)
{
    for (short i = 0; i < Rows; i++) 
    {
        for (short j = 0; j < Cols; j++)
        {
            arr1[i][j] = RandomNumber(1, 10);
        }
    }
}

void PrintMatrix(int arr1[3][3], short Rows, short Cols)
{
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            printf("%02d ", arr1[i][j]); 
            cout <<  Tap(1);
        }
        cout << "\n";
    }
}

void MultiplyMatrix(int MatrixResult[3][3],int arr1[3][3],int arr2[3][3],short Rows, short Cols)
{
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            MatrixResult[i][j] = arr1[i][j] * arr2[i][j];
        }
    }
}

int main()
{
    // Seeds the random number generator in C++, called only once
    srand((unsigned)time(NULL));

    int arr1[3][3];
    int arr2[3][3];
    int MatrixResult[3][3];

    FillMatrixWithRandomNumbers(arr1, 3, 3);
    cout << "\nMatrix 1 :\n";
    PrintMatrix(arr1, 3, 3);

    FillMatrixWithRandomNumbers(arr2, 3, 3);
    cout << "\nMatrix 2 :\n";
    PrintMatrix(arr2, 3, 3);

    MultiplyMatrix(MatrixResult, arr1, arr2, 3, 3);

    cout << "\nResult :\n";
    PrintMatrix(MatrixResult, 3, 3);

    system("pause>0");

    return 0;
}
