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
int SumOfDigits(int Number)
{
	int sum = 0;
	while (Number > 0)
	{
		int Reminder = Number % 10;
		Number = Number / 10;
		sum += Reminder;
	}

	return sum;
}
int main()
{

	cout << "SumOfDigits : " 
		<< SumOfDigits(ReadPositveNumber("Please Enter a Positive Number")) 
		<< endl;

	return 0;
}
