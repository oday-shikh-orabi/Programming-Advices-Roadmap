#include <iostream>
using namespace std;

int ReadPositiveNumber(string Message)
{
	int Number;
	do
	{
		cout << Message << endl;
		cin >> Number;
	} while (Number < 0);


	return Number;
}
bool IsPerfectNumber(int Number)
{
	int sum = 0;
	for (int i = 1; i < Number; i++)
	{
		if (Number % i == 0)
		{
			sum += i;
		}
	}
	return Number == sum; // åæä ãÇİí ÏÇÚí ÍØ Çİ ÎáÕ ãÈÇÔÑÉ ÈÑÌÚáí ÊÑæ Çæ İæáÓ

}
void PrintPerfectNumber(int Number)
{
	if (IsPerfectNumber(Number))
	{
		cout << Number << " is Perfect. " << endl;
	}
	else
		cout << Number << " is Not Perfect. " << endl;
}
int main()
{
	PrintPerfectNumber(ReadPositiveNumber("Pleas Enter Positive Number ? "));
}