#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int RandomNumber(int From, int To)
{
	int randnum = rand() % (To - From + 1) + From;

	return randnum;
}
int ReadArrayLength()
{
	int lengthArray;
	do
	{
		cout << "Please Enter a Positive Number : " << endl;
		cin >> lengthArray;
	} while (lengthArray < 0);
	return lengthArray;
}
void FillArrayWithAscendingNumbers(int* arr1, int lengthArray)
{    // ÇÑÞÇã ÊÕÇÚÏíÉ
	
	for (int i = 0; i < lengthArray; i++)
	{
		arr1[i] = i +1;
	}

} 
void Swap(int& A, int& B) 
{
	int Tumb;

	Tumb = A;
	A = B;
	B = Tumb;
}
void FillArrayWithShuffleNumbers(int* arr1, int lengthArray)
{
	for (int i = 0; i < lengthArray; i++)
	{
		Swap(arr1[RandomNumber(1, lengthArray) - 1], arr1[RandomNumber(1, lengthArray) - 1]);
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
int main()
{
	srand((unsigned)time(NULL));

	int arrayLength = ReadArrayLength();

	int OrginalArray [30000];
	FillArrayWithAscendingNumbers(OrginalArray, arrayLength);
	int ShuffleArray[30000];

	cout << "Array Elements : ";
	PrintArray(OrginalArray,arrayLength);
	FillArrayWithShuffleNumbers(OrginalArray, arrayLength);
	cout << "Array Elements : ";
	PrintArray(OrginalArray, arrayLength);

	return 0;
}
