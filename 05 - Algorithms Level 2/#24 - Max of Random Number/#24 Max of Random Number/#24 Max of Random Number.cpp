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
		cout << "\n";
	} while (lengthArray < 0);

	for (int i = 0; i < lengthArray; i++)
	{
		numbers[i] = RandomNumber(1, 100);
	}

}
void PrintResult(int* numbers, int lengthArray)
{
	
	for (int i = 0; i < lengthArray; i++)
	{
		cout << numbers[i] << " ";
	}
	cout << "\n" << endl;
}
int MaxNumberOfArray(int numbers[] , int lengthArray)
{
	int MaxNumber = 0;
	for (int i = 0; i < lengthArray; i++)
	{
		if (numbers[i] > MaxNumber)
		{
			MaxNumber = numbers[i];
		}
	}
	return MaxNumber;
}
int main()
{
	srand((unsigned)time(NULL));

	int numbers[100], arrayLength;

	FillArrayWithRandomNumbers(numbers, arrayLength);
	cout << "Array Elements : ";
	PrintResult(numbers, arrayLength);
	cout << "Max Number is : ";
	cout << MaxNumberOfArray(numbers, arrayLength)<< "\n" << endl;

	return 0;
}
