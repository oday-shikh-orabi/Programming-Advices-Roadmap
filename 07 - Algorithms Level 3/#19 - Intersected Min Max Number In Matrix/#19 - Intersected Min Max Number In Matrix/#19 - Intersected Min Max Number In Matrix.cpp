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

int MaxNumber(int Matrix1[3][3], short Rows, short Cols)
{
    int MaxNum = Matrix1[0][0];
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            if (Matrix1[i][j] > MaxNum)
            {
                MaxNum = Matrix1[i][j];
            }
        }
    }
    
    return MaxNum;
}

int MinNumber(int Matrix1[3][3], short Rows, short Cols)
{
    int MinNum = Matrix1[0][0];
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            if (Matrix1[i][j] > MinNum)
            {
                MinNum = Matrix1[i][j];
            }
        }
    }

    return MinNum;
}

int main()
{
    // Seeds the random number generator in C++, called only once
    srand((unsigned)time(NULL));

    int Matrix1[3][3];


    FillMatrixWithRandomNumbers(Matrix1, 3, 3);
    cout << "\nMatrix 1 :\n";
    PrintMatrix(Matrix1, 3, 3);


    cout << "\nMax Number :" << endl;
    cout << MaxNumber(Matrix1, 3, 3);
    cout << "\nMax Number :" << endl;
    cout << MinNumber(Matrix1, 3, 3);


    system("pause>0");

    return 0;
}