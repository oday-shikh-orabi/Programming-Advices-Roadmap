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
void PrintInvertedNumberPattern(int Number)
{
	char Latter = 64;
	for (int i = 1; i <= Number; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			Latter = 64 + i;
			cout << Latter;
		}
		cout << endl;
	}
}
int main()
{
	PrintInvertedNumberPattern(ReadPositveNumber("Please Enter a Positive Number"));
}
