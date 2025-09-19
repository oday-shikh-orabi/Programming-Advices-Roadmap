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
            cout << setw(3) << arr[i][j] << Tap(1); //setw3 íÚäí Îáíáí 3 ÎÇäÇÊ ááÑŞã íáí ÈÏí ÇØÈÚæ ãÔÇä ÇáÊäÓíŞ íØáÚ 
                                                         // ÒÇÈØ æßÃäå ÌÏæá
                                                        
        }
        cout << "\n";
    }
}

int main()
{
    // Seeds the random number generator in C++, called only once
    srand((unsigned)time(NULL));

    int arr[3][3];

    FillMatrixWithRandomNumbers(arr, 3, 3);

    cout << "\nThe following is a 3x3 random matrix:\n";
    PrintMatrix(arr, 3, 3);

    system("pause>0"); //ÇáÃãÑ pause İí æíäÏæÒ íæŞİ ÊäİíĞ ÇáÈÑäÇãÌ æíÚÑÖ ÇáÑÓÇáÉ
                               //Press any key to continue . . .
                                //>0
                                  // íÚäí íãäÚ ÙåæÑ ÑÓÇáÉ "Press any key to continue . . ."¡ 
                                  // ÈÓ ÇáÈÑäÇãÌ áÓå ÑÍ íÊæŞİ áíäÊÙÑ ÖÛØ ãİÊÇÍ.
                                  //puse Úá Íá ÈÊÙåÑ ÑÓÇáÉ prees to continue
                                   
    return 0;
}

//out put
//arr[rows][coulm]
/*
arr[0][0]   arr[0][1]   arr[0][2]
arr[1][0]   arr[1][1]   arr[1][2]
arr[2][0]   arr[2][1]   arr[2][2]
*/