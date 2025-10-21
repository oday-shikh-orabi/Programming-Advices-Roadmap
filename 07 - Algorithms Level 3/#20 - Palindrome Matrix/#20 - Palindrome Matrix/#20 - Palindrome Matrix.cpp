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

bool IsPalindromeMatrix(int Matrix1[3][3], short Rows, short Cols)
{
    /*+int CheckCount = 0;
    for (short i = 0; i < Rows; i++)
    {
            if (Matrix1[i][0] == Matrix1[i][2])
            {
                // if (Matrix1[0][1] == Matrix1[0][1]); if Matrix 4x4 or more
                CheckCount++;
            }
    }
    return CheckCount == 3;*/

    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols / 2; j++)
        {
            if (Matrix1[i][j] != Matrix1[i][Cols - 1 - j])
            {
                return false;
            }
        }
    }
    return true;

    // ��� �� ����� ��� �� ������ * ������ * ������ ����� �� = 0
    // ����� ����� ������ ����� �� = 1 ������� ��� ����� ** ������ ** ��������� ��� ������� ������ ���� ����� ��� 3,3 ��������� ���� ��������
    // ��� �� ����� ��� ������ ������ ���
    // ����� �� �������� ��� ��� �� ����� ������ �� ��� ����� �� ����� ����� ������ ���� ���� �� ���� ����
    // ��� ��� �� ���� �� ������ ���� ��� ���� ��� ���� 
    // ���� ��� �� ���� ��� �� ������ ���� ��� ���� ��� ������
    // ���� ����� �� ���� ������� ��� �������� ������� �� �� ������� ���� �������
    // �� ������ ����� �� �� �� ���� ��������� 

}

int main()
{
    // Seeds the random number generator in C++, called only once
    srand((unsigned)time(NULL));

    int Matrix1[3][3] = { {1,2,1},
                          {7,2,7},
                          {3,2,3}
    };


    /*FillMatrixWithRandomNumbers(Matrix1, 3, 3);
    cout << "\nMatrix 1 :\n";*/
    PrintMatrix(Matrix1, 3, 3);

    if (IsPalindromeMatrix(Matrix1,3,3))
    {
        cout << "\nYes, Matrix is Palindrome";
    }
    else
    {
        cout << "\nNO, Matrix is Not Palindrome";
    }

    system("pause>0");

    return 0;
}