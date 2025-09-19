#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int RandomNumber(int From, int To)
{
	int randnum = rand() % (To - From + 1) + From;

	return randnum;
}
void FillArrayWithRandomNumbers(int* numbers, int& lengthArray)
{
	do
	{
		cout << "Please Enter a Positive Number : " << endl;
		cin >> lengthArray;
	} while (lengthArray < 0);

	for (int i = 0; i < lengthArray; i++)
	{
		numbers[i] = RandomNumber(1, 100);
	}

}
void PrintArray(int* numbers, int lengthArray)
{
	for (int i = 0; i < lengthArray; i++)
	{
		cout << numbers[i] << " ";
	}
	cout << endl;
}
void CopyArray(int* originalArray,int* copiedArray,int lengthArray)
{
	for (int i = 0; i < lengthArray; i++)
	{
		copiedArray[i] = originalArray[i];
	}
}
int main()
{
	srand((unsigned)time(NULL));

	int arr[100] , lengthArray;

	FillArrayWithRandomNumbers(arr, lengthArray);
	
	int  arr2[100];
	CopyArray(arr, arr2,lengthArray);

	cout << "Array 1 Elements : ";
	PrintArray(arr, lengthArray);
	cout << "Array 2 Elements After Copy : ";
	PrintArray(arr2, lengthArray);

	return 0;
}
