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
	for (int i = Number; 0 < i; i--)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << i;
		}
		cout << endl;
	}
}
int main()
{
	PrintInvertedNumberPattern(ReadPositveNumber("Please Enter a Positive Number"));
}
