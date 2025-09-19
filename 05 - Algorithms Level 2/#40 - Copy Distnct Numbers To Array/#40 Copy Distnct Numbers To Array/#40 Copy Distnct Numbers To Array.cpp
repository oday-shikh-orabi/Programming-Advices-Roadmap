#include <iostream>
using namespace std;

void FillArray(int arr[100], int& arrLength)
{
    arrLength = 10;
    arr[0] = 10;
    arr[1] = 10;
    arr[2] = 10;
    arr[3] = 50;
    arr[4] = 50;
    arr[5] = 70;
    arr[6] = 70;
    arr[7] = 70;
    arr[8] = 70;
    arr[9] = 90;
}

void PrintArray(int arr[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
        cout << arr[i] << " ";
    cout << "\n";
}

short FindNumberPositionInArray(int Number, int arr[100], int arrLength) // ÈÊÚØíå ÑÞã ÈíÏæÑ Úáíå ÈÇáãÕÝæÝÉ ÇÐÇ áÞÇå ÈíÑÌÚ ãæÞÚæ
                                                                         // ÇÐÇ ãÇ áÞÇå ÈíÑÌÚ -1
{
    for (int i = 0; i < arrLength; i++)
    {
        if (arr[i] == Number)
            return i;
    }
    return -1;
}

bool IsNumberInArray(int Number, int arr[100], int arrLength) // ÇÐÇ áÞÇå ÈíÑÌÚ ÊÑæ ÇÐÇ ãÇ áÞÇå ÈíÑÌÚ ÝæáÓ
{
    return FindNumberPositionInArray(Number, arr, arrLength) != -1;
}

void AddArrayElement(int Number, int arr[100], int& arrLength)
{
    arrLength++;
    arr[arrLength - 1] = Number;
}

void CopyDistinctNumbersToArray(int arrSource[100],  int SourceLength, int arrDestination[100], int& DestinationLength)
{
    for (int i = 0; i < SourceLength; i++)
    {
        if (!IsNumberInArray(arrSource[i], arrDestination, DestinationLength)) // ÇÐÇ ãæ ãæÌæÏ ÈÇáãÕÝæÝÉ ÇáËÇäíÉ ÈÖíÞæ
        {
            AddArrayElement(arrSource[i], arrDestination, DestinationLength);
        }
    }
}
int main()
{

	int arr[100] = {10,10,10,50,50,70,70,70,70,90}, originalLength = 10;
	int  arr2[100], copiedLength = 0;

    CopyDistinctNumbersToArray(arr, originalLength, arr2, copiedLength);

	cout << "Array 1 Elements : ";
	PrintArray(arr, originalLength);
	cout << "Array 2 Distnct Elements : ";
	PrintArray(arr2, copiedLength);

	return 0;
}
