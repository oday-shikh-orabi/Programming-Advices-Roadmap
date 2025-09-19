#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int RandomNumber(int From, int To)
{
	int randnum = rand() % (To - From + 1) + From;

	return randnum;
}
void FillArrayWithRandomNumbers (int * numbers  , int& lengthArray)
{
	do
	{
		cout << "Please Enter a Positive Number : " << endl;
		cin >> lengthArray;
	} while (lengthArray < 0);

	for (int i = 0; i < lengthArray; i++)
	{
		numbers [i] = RandomNumber(1, 100);
	}
	
}
void PrintArray(int* numbers , int lengthArray)
{
	for (int i = 0; i < lengthArray; i++)
	{
		cout << numbers [i] << " ";
	}
	cout << endl;
}
int ReadPositiveNumber(string Message)
{
	int Number;
	do
	{
		cout << Message << endl;
		cin >> Number;
	} while (Number < 0);


	return Number;
}
int ReturnNumberIndexInArray(int* ArrayOfNumber, int LengthArray ,int NumForSearch)
{
	
	for (int i = 0; i < LengthArray; i++)
	{
		if (ArrayOfNumber[i] == NumForSearch)
		{
			return i;
		}
	}
			return -1;
}
void PrintResutls(int NumForSearch, int NumberOFindex)
{
	if (NumberOFindex != -1)
	{
		cout << "\nNumber You Are Looking For Is : " << NumForSearch << endl;
		cout << "The Number Found At Position : " << NumberOFindex << endl;
		cout << "The Number Found Its Order : " << NumberOFindex + 1 << endl;
	}
	else
	{
		cout << "\nNumber You Are Looking For Is : " << NumForSearch << endl;
		cout << "The Number is Not Found :-(" << endl;
	}
}
int main()
{
	srand((unsigned)time(NULL));

	int numbers  [100], arrayLength;

	FillArrayWithRandomNumbers (numbers ,arrayLength);
	cout << "\nArray 1 Elements : \n";
	PrintArray(numbers ,arrayLength);

	int NumForSearch = ReadPositiveNumber("\nPlease Enter a Number Search For ?");
	int NumberOFindex = ReturnNumberIndexInArray(numbers, arrayLength, NumForSearch);
	PrintResutls(NumForSearch, NumberOFindex);

	return 0;
}
