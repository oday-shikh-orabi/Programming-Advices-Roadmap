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
	cout << "Array Elements : ";
	for (int i = 0; i < lengthArray; i++)
	{
		cout << numbers[i] << " ";
	}
	cout << endl;
}
int SumOfRandomArray(int* numbers, int lengthArray)
{
	int Sum = 0;
	for (int i = 0; i < lengthArray; i++)
	{
		Sum += numbers[i];
	}

	return Sum;
}
float ArrayAverage(int* numbers, int lengthArray)
{
	return float (SumOfRandomArray(numbers,lengthArray)) / lengthArray;
}
int main()
{
	srand((unsigned)time(NULL));

	int numbers[100], arrayLength;

	FillArrayWithRandomNumbers(numbers, arrayLength);
	PrintArray(numbers, arrayLength);
	cout << "Array Average : " << ArrayAverage(numbers, arrayLength) << endl;

	return 0;
}
