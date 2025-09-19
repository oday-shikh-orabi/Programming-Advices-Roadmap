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
int ReverseNumber(int Number)
{
	int Number2 = 0;
	while (Number > 0)
	{
		int Reminder = Number % 10;
		Number = Number / 10;
		Number2 = Number2 * 10 + Reminder;
	}
	return Number2;
}
bool IsPalaindromeNumber(int UserInputNumber , int ReverseNumber)
{
	return UserInputNumber == ReverseNumber;
}
void PritResult(int UserInputNumber, int ReverseNumber)
{
	if (IsPalaindromeNumber(UserInputNumber, ReverseNumber))
	{
		cout << "yes, it is a Palaindrome Number";
	}
	else
	{
		cout << "No, it is a Palaindrome Numbe";
	}
}
int main()
{
	int UserInputNumber = ReadPositveNumber("Please Enter a Positive Number");
	int Reverse = ReverseNumber(UserInputNumber);

	PritResult(UserInputNumber, Reverse);
}
