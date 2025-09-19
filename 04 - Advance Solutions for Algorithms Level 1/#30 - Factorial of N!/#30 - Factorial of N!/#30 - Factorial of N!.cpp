#include <iostream>
using namespace std;

int ReadPositiveNumber(string Massege)
{
	int Number;
	do
	{
		cout << Massege << endl;
		cin >> Number;
	} while (Number < 0);

	return Number;
}
int CalculateFactorial(int Number)
{
	int Factorial = 1;

	for (int i = 1; i <= Number; i++)
	{
		Factorial *= i;
	}

	return Factorial;
}
void PrintResult(int Factorial , int Number)
{
	cout << "Factorial For " << Number << " Is : " << Factorial << endl;
}
int main()
{
	int Number = ReadPositiveNumber("Pleas Enter Positeve Number : ");
	int Factorial = CalculateFactorial(Number);

	PrintResult(Factorial, Number);
}
