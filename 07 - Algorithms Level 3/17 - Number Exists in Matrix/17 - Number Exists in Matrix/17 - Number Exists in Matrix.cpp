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

bool IsNumberInMatrix(int Matrix1[3][3], int NumberToCount, int Rows, int Cols)
{
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            if (Matrix1[i][j] == NumberToCount)
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{
    // Seeds the random number generator in C++, called only once
    srand((unsigned)time(NULL));

    int Matrix1[3][3];

    FillMatrixWithRandomNumbers(Matrix1, 3, 3);

    cout << "\nMatrix 1 :\n";
    PrintMatrix(Matrix1, 3, 3);

    int Number;
    cout << "\nEnter The Number to Look for in Matrix ? ";
    cin >> Number;

    if (IsNumberInMatrix(Matrix1,Number, 3, 3))
    {
        cout << "Yes it is there." << endl;
    }
    else
    {
        cout << "No, it is NOT there." << endl;
    }

    system("pause>0");

    return 0;
}