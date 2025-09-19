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
string ReverseNumber(int Number)
{
	string Reverse;
	while (Number > 0)
	{
		int Reminder = Number % 10;
		Number = Number / 10;
		Reverse += to_string(Reminder);
	}
	return Reverse;
}
int main()
{
	cout << "Reverse Number :"
		<< ReverseNumber(ReadPositveNumber("Please Enter a Positive Number"))
		<< endl;

	return 0;
}
