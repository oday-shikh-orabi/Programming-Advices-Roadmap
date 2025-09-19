#include <iostream>
using namespace std;

int ReadPositveNumber(string Message)
{
	int Number;
	do
	{
		cout << Message << endl;
		cin >> Number;
	} while (Number < 0);

	return Number;
}
int ReadSerchNumber()
{
	int SerchNumber = ReadPositveNumber("Please Enter a Number You Want To Search about it : ");

	return SerchNumber;
}
int* ReadArray(int ArrayLength) 
{
	int* Numbers = new int[ArrayLength]; // ÊÎÕíÕ ãÕİæİÉ ÏíäÇãíßíÉ}

	for (int i = 0; i < ArrayLength; i++)
	{
		cout << "Elment [" << i + 1 << "] : ";
		cin >> Numbers[i];
	}

	return Numbers;
}
int CheckArry(int Number[] , int ArrayLength , int SerchNumber)
{
	int Count = 0;

	for (int i = 0; i <= ArrayLength; i++)
	{
		if (Number[i] == SerchNumber)
			Count++;
	}

	return Count;
}
void PrintResult(int Number[], int ArrayLength, int Count , int SerchNumber)
{
	cout << "Orginal Arry : ";
	for (int i = 0; i < ArrayLength; i++)
	{
		cout << " " << Number[i] << " ";
	}
	cout << endl;
	cout << SerchNumber << " is rapeated " << Count << " time(s)" << endl;
}
int main()
{
	int ArrayLength = ReadPositveNumber("Pleas Enter Arry Leangth :");
	int* Number = new int[ArrayLength];
	Number = ReadArray(ArrayLength);
	int SearchNumber = ReadSerchNumber();
	int Count = CheckArry(Number,ArrayLength,SearchNumber);
	PrintResult(Number, ArrayLength, Count, SearchNumber);

	return 0;
}
