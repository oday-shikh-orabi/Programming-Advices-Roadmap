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

bool IsSparceMatrix(int Matrix1[3][3], int Rows, int Cols)
{

     int CounterNumber0 = 0;
     int CounterElseNumber = 0;

    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            if (Matrix1[i][j] == 0)
            {
                CounterNumber0++;
            }
            else
                CounterElseNumber++;

        }
    }
    
    return CounterNumber0 > CounterElseNumber;
}

int main()
{
    // Seeds the random number generator in C++, called only once
    srand((unsigned)time(NULL));

    int Matrix1[3][3];
    int CounterNumber0,CounterElseNumber;

    FillMatrixWithRandomNumbers(Matrix1, 3, 3);

    cout << "\nMatrix 1 :\n";
    PrintMatrix(Matrix1, 3, 3);

    if (IsSparceMatrix(Matrix1, 3, 3))
    {
        cout << "Yes, it is sparce";
    }
    else
    {
        cout << "No, its Not sparce";
    }
    system("pause>0");

    return 0;
}