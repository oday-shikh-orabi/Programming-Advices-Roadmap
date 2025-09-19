#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int ReadNumber()
{
    int Number;
    cout << "\nPlease enter a number to search for?\n";
    cin >> Number;
    return Number;
}

int RandomNumber(int From, int To)
{
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}

void FillArrayWithRandomNumbers(int arr[100], int& arrLength)
{
    cout << "\nEnter number of elements:\n";
    cin >> arrLength;
    for (int i = 0; i < arrLength; i++)
        arr[i] = RandomNumber(1, 100);
}

void PrintArray(int arr[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
        cout << arr[i] << " ";
    cout << "\n";
}

int OddCount(int arr[100], int& arrLength)
{
    int Counter = 0;
    for (int i = 0; i < arrLength; i++)
    {
        if (!(arr[i] % 2 == 0))
            Counter++;
    }
    return Counter;
}
int main()
{
    srand((unsigned)time(NULL));

    int arr[100];
    int arrLength;

    FillArrayWithRandomNumbers(arr, arrLength);

    cout << "Array 1 elements:\n";
    PrintArray(arr, arrLength);

    int CountOdd = OddCount(arr , arrLength);
    
    cout << " Odd Numbers Count is : " << CountOdd << endl;

    return 0;
}
