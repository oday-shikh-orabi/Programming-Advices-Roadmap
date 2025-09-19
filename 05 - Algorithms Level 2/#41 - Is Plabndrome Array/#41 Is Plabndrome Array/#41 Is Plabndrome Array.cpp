#include <iostream>
using namespace std;


void PrintArray(int arr[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
        cout << arr[i] << " ";
    cout << "\n";
}
void ReverseArray(int* arrSource, int* arrReversed, int lengthArray)
{
   
    for (int i = 0; i < lengthArray; i++)
    {
        arrReversed[i] = arrSource[lengthArray - 1 - i];
    }

}
bool IsPalaindromeArray(int* arrSource, int* arrReversed , int lengthArray)
{
    for (int i = 0; i < lengthArray; i++)
    {
        if (arrSource[i] != arrReversed[i])
            return false;
    }
    return true;
}
int main()
{

    int arr[100] = { 10,20,30,30,20,10 }, SourceLength = 6;
    int ReverseArr[100];


    ReverseArray(arr, ReverseArr, SourceLength);

    cout << "Array 1 Elements : ";
    PrintArray(arr, SourceLength);

    if (IsPalaindromeArray(arr, ReverseArr, SourceLength))
    {
        cout << "\nPalandrome Array\n";
    }
    else
    {
        cout << "\nNot Palandrome Array\n";
    }
        

    return 0;
}
