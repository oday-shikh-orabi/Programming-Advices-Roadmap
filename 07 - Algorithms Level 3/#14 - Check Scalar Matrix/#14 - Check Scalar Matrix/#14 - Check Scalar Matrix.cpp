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

void FillMatrixWithRandomNumbers(int Matrix1[3][3], short Rows, short Cols)
{
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            Matrix1[i][j] = RandomNumber(1, 10);
        }
    }
}

void PrintMatrix(int Matrix1[3][3], short Rows, short Cols)
{
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            printf("%02d ", Matrix1[i][j]);
            cout << Tap(1);
        }
        cout << "\n";
    }
}

bool IsIScalarMatrix(int Matrix1[3][3], int Rows, int Cols)
{

    int FirstDiagElement = Matrix1[0][0];

    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            if (i == j && Matrix1[i][j] != FirstDiagElement)
            {
                return false;
            }
            else if (i != j && Matrix1[i][j] != 0)
            {
                return false;
            }
        }
    }
    return true;
}

int main()
{
    // Seeds the random number generator in C++, called only once
    srand((unsigned)time(NULL));

    int Matrix1[3][3];
    //int Matrix1[3][3] = { {1,0,0} , {0,1,0} , {0,0,1} };

    FillMatrixWithRandomNumbers(Matrix1, 3, 3);

    cout << "\nMatrix 1 :\n";
    PrintMatrix(Matrix1, 3, 3);

    if (IsIScalarMatrix(Matrix1, 3, 3))
        cout << "\nYES: Mitrix Is Scalar.";
    else
        cout << "\nNo: Matrix Is NOT Scalar.";

    system("pause>0");

    return 0;
}