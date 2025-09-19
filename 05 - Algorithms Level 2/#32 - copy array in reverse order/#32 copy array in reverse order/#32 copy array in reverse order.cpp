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
void ReverseArray(int* numbers , int* ReverseNumber, int lengthArray)
{
	/*int ReverseCount = lengthArray - 1;
	for (int i = 0; i < lengthArray; i++)
	{
		ReverseNumber[i] = numbers[ReverseCount];
		ReverseCount--;
	}*/
	for (int i = 0; i < lengthArray; i++)
	{
		ReverseNumber[i] = numbers[lengthArray-1-i];
	}

}
void PrintResult(int* Array, int lengthArray)
{
	for (int i = 0; i < lengthArray; i++)
	{
		cout << Array[i] << " ";
	}
	cout << endl;
}
int main()
{
	srand((unsigned)time(NULL));

	int numbers[100], arrayLength;

	FillArrayWithRandomNumbers(numbers, arrayLength);

	int ReverseNumber[100];
	ReverseArray(numbers, ReverseNumber, arrayLength);

	cout << "Array Elements : ";
	PrintResult(numbers, arrayLength);
	cout << "Array 2 elements after copy : ";
	PrintResult(ReverseNumber, arrayLength);

	return 0;
}
