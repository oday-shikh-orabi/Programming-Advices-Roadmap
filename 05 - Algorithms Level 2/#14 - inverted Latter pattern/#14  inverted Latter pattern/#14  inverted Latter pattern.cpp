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
	char Latter = 65;
	for (int i = Number; 0 < i; i--)
	{
		
		for (int j = 1; j <= i; j++)
		{
			Latter = 64 + i;
			cout << Latter;
		}
		cout << endl;
	}
	/*for (int i = 64 + Number; 64 < i; i--)
	{

		for (int j = 1; j <= Number; j++)
		{

			cout << char(i);
		}
		Number--;
		cout << endl;
	}*/
}
int main()
{
	PrintInvertedNumberPattern(ReadPositveNumber("Please Enter a Positive Number"));
}
