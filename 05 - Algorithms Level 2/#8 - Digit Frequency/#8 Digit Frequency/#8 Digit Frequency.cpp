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
int ContDigitFrequency( int NumberForCounting ,int Number)
{
	int FreqCont = 0; //ÊßÑÇÑ ÇáÑŞã
	while (Number > 0)
	{
		int Reminder = Number % 10;
		Number = Number / 10;
		if (Reminder == NumberForCounting)
			FreqCont++;
	}
	return FreqCont;
}
int main()
{
	int Number = ReadPositveNumber("Please Enter a Number :");
	short DigitToCheck = ReadPositveNumber("Please Enter a digit to check : ");

	cout << "Digit " << DigitToCheck 
		<< " Frequency Is " << ContDigitFrequency(DigitToCheck, Number)
		<< " Time(s)" << endl;
}
