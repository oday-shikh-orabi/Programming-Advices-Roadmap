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
void PrintResult(int Number)
{
	while (Number > 0)
	{
		int Reminder = Number % 10;
		Number = Number / 10;
		cout << Reminder << endl;
	}
	
}
int main()
{
	PrintResult(ReadPositveNumber("Please Enter a Positive Number"));
}
