#include <iostream>
#include <string>
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
	int Number2 = 0 ;
	while (Number > 0)
	{
		int Reminder = Number % 10;
		Number = Number / 10;
		Number2 = Number2 * 10  + Reminder;
	}
	return Number2;
}
int main()
{
	cout << "Reverse Number :"
		<< ReverseNumber(ReadPositveNumber("Please Enter a Positive Number"))
		<< endl;

	return 0;
}
