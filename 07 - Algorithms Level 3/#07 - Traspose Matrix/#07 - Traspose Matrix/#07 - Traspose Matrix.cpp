#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

string Tap(int Number)
{
    string T = "";

    for (int i = 1; i <= Number; i++)
    {
        T = T + "\t";
    }

    return T;
}

void FillMatrixWithOrderdNumber(int arr[3][3], short Rows, short Cols)
{
    short Counter = 0;
    for (short i = 0; i < Rows; i++) 
    {
        for (short j = 0; j < Cols; j++)
        {
            Counter++;
            arr[i][j] = Counter;
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

void TransposeMatrix(int arr[3][3] , int arrTranspose[3][3], short Rows, short Cols)
{
    /*for (short j = 0; j < Cols; j++)
    {
        for (short i = 0; i < Rows; i++)
        {
            TransposeArr[i][j] = arr[j][i];
        }
        åí ÈÊãÔí ÈÇáÊÑÊíÈ ÈÊÚÈí Çæá Ôí ÇáÚÇãæÏ 123 ÈÚÏíä ÈÊäÊÞá ááÚÇãæÏ íáí ÈÚÏæ
    }*/

    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            arrTranspose[i][j] = arr[j][i];
        }
    }
    // åíß ÕÍ ãæ ÈÇáÊÑÊíÈ áßä ÚãáäÇ åá Ôí ãä æÑÇ ÚáÇÞÉ æÇÖÍÉ Èíäåã
}

int main()
{

    int arr[3][3],arrTranspose[3][3];
    

    FillMatrixWithOrderdNumber(arr, 3, 3);

    cout << "\nThe following is a 3x3 random matrix:\n";
    PrintMatrix(arr, 3, 3);

    TransposeMatrix(arr, arrTranspose, 3, 3);

    cout << "\nThe following is The Transposed matrix:\n";
    PrintMatrix(arrTranspose, 3, 3);

    system("pause>0");

    return 0;
}
