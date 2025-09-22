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

int RowSum(int arr[3][3], short RowNumber, short Cols)
{
    int Sum = 0;
    for (short j = 0; j < Cols; j++)
    {
        Sum += arr[RowNumber][j];
    }
    return Sum;
}

void PrintEachRowSum(int arr[3][3], int SumArr[3], short Rows, short Cols)
{
    for (short i = 0; i < Rows; i++)
    {
        SumArr[i] = RowSum(arr, i, Cols);
        cout << " Row " << i + 1 << " Sum = " << SumArr[i] << endl;
    }
}

/*void PrintEashSum(int arr[3][3], int SumArr[3], short Rows, short Cols)
{
    
    for (short i = 0; i < Rows; i++)
    {
        SumArr[i] = 0;
        for (short j = 0; j < Cols; j++)
        {
            SumArr[i] += arr[i][j];
        }
        printf("Row %d Sum = %d\n", i + 1, SumArr[i]);
    }
    ÈØÑíŞÉ ÇÈæ åÏåæÏ İÕáäÇ ÇáÇÓØÑ ÈİÇäßÔä æÇáÚæÇãíÏ ÈİÇäßÔä ÇáÑæ Óã ÈíÚÊãÏ Úá ÚæÇãíÏ ÈÇáÊäÇŞÕ İÈíÌãÚ Çæá ÓØÑ 
    ÈÚÏíä ÈíÑÌÚ áİÇäßÔä áÈÑíäÊ Óã æÈíÇÎÏ ÑŞã ÓØÑ ÇáÊÇáí ÈíİæÊ Úáì Ñæ Óã æÈíÌãÚ æÈíÑÌÚ æåíß
}*/
int main()
{
    // Seeds the random number generator in C++, called only once
    srand((unsigned)time(NULL));

    int arr[3][3];
    int SumArr[3];

    FillMatrixWithRandomNumbers(arr, 3, 3);

    cout << "\nThe following is a 3x3 random matrix:\n";
    PrintMatrix(arr, 3, 3);

    cout << "\nThe following are the sum of eash row in the matrix:\n";
    //PrintEashSum(arr,SumArr, 3, 3 );
    PrintEachRowSum(arr, SumArr, 3, 3);


    system("pause>0");

    return 0;
}
