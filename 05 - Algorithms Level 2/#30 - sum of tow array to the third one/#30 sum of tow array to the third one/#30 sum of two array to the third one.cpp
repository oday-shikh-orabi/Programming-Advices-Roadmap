#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int RandomNumber(int From, int To)
{
	int randnum = rand() % (To - From + 1) + From;

	return randnum;
}
int ReadArrayLength(int& lengthArray)
{
	do
	{
		cout << "Please Enter a Positive Number : " << endl;
		cin >> lengthArray;
	} while (lengthArray < 0);
	return lengthArray;
}
void FillArrayWithRandomNumbers(int* numbers, int& lengthArray)
{
	
	for (int i = 0; i < lengthArray; i++)
	{
		numbers[i] = RandomNumber(1, 100);
	}

}
void PrintArrayElements(int* numbers, int lengthArray)
{
	
	for (int i = 0; i < lengthArray; i++)
	{
		cout << numbers[i] << " ";
	}
	cout << endl;
}
void SumOfTwoArraysToThird(int* arr1,int* arr2 ,int* arr3, int LengthOfArrays)
{
	for (int i = 0; i < LengthOfArrays; i++)
	{
		arr3[i] = arr1[i] + arr2[i];
	}
}
int main()
{
	srand((unsigned)time(NULL));

	int arr1[100], arrayLength;

	ReadArrayLength(arrayLength);
	// Genrate Array 1
	FillArrayWithRandomNumbers(arr1, arrayLength);
	// Genrate Array 2
	int arr2[100];
	FillArrayWithRandomNumbers(arr2, arrayLength);
	// Sum of Tow Array in the Third Array
	int arr3[100];
	SumOfTwoArraysToThird(arr1,arr2,arr3,arrayLength);

	cout << "Array 1 Elements : ";
	PrintArrayElements(arr1, arrayLength);
	cout << "Array 2 Elements : ";
	PrintArrayElements(arr2, arrayLength);
	cout << "Sum Of Array 1 and Array 2 Elements : ";
	PrintArrayElements(arr3, arrayLength);

	

	return 0;
}
