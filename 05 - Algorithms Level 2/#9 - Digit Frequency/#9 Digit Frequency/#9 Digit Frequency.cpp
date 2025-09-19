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
int ContDigitFrequency(int NumberForCounting, int Number)
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
void PrintResult(int Number)
{
	int DigitFrequency;
	for (int i = 0; i <= 9; i++)
	{
		DigitFrequency = ContDigitFrequency(i, Number);

		if (DigitFrequency > 0)
		{
			cout << "Digit " << i
				<< " Frequency Is " << DigitFrequency
				<< " Time(s)" << endl;
		}
		
	}


}
int main()
{
	PrintResult(ReadPositveNumber("Please Enter a Number :"));
	
	return 0;
}

