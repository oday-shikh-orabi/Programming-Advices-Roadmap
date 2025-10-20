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
            Matrix1[i][j] = RandomNumber(1, 100);
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

bool IsNumberInMatrix(int Matrix2[3][3] ,int NumFromMatrix, short Rows, short Cols)
{
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            if (Matrix2[i][j] == NumFromMatrix)
            {
                return true;
            }
            
        }
    }
    return false;
}

void PrintIntersectedNumber(int Matrix1[3][3],int Matrix2[3][3], short Rows, short Cols)
{
    int Number;
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            Number = Matrix1[i][j];

            if (IsNumberInMatrix(Matrix2, Number, 3, 3))
            {
                cout << setw(3) << Matrix1[i][j] << Tap(1);
            }
        }
    }
}

int main()
{
    // Seeds the random number generator in C++, called only once
    srand((unsigned)time(NULL));

    int Matrix1[3][3];
    int Matrix2[3][3];


    FillMatrixWithRandomNumbers(Matrix1, 3, 3);
    cout << "\nMatrix 1 :\n";
    PrintMatrix(Matrix1, 3, 3);

    FillMatrixWithRandomNumbers(Matrix2, 3, 3);
    cout << "\nMatrix 2 :\n";
    PrintMatrix(Matrix2, 3, 3);

    cout << "\nIntersected Number are :" << endl;
    PrintIntersectedNumber(Matrix1, Matrix2, 3, 3);

    system("pause>0");

    return 0;
}