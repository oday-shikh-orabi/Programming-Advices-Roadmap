#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int RandomNumber(int From, int To)
{
	int randnum = rand() % (To - From + 1) + From;

	return randnum;
}
void FillArrayWithRandomNumbers(int numbers[100], int& lengthArray)
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
void PrintResult(int numbers[100], int lengthArray)
{

	for (int i = 0; i < lengthArray; i++)
	{
		cout << numbers[i] << " ";
	}
	cout << "\n" << endl;
}
int MinNumberOfArray(int numbers[100], int lengthArray)
{
	int MinNumber = numbers[0]; //åí ÇßËÑ ÍÑÝíÉ ãä íáí ÞÈáåÇ 
	for (int i = 1; i < lengthArray; i++)
	{
		if (numbers[i] < MinNumber)
		{
			MinNumber = numbers[i];
		}
	}
	return MinNumber;
}
int main()
{
	srand((unsigned)time(NULL));

	int numbers[100], arrayLength;

	FillArrayWithRandomNumbers(numbers, arrayLength);
	cout << "Array Elements : ";
	PrintResult(numbers, arrayLength);
	cout << "Min Number is : ";
	cout << MinNumberOfArray(numbers, arrayLength) << "\n" << endl;

	return 0;
}
