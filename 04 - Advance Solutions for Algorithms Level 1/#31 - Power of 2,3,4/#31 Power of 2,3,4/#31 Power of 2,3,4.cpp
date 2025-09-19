#include <iostream>
using namespace std;

int ReadUserNumber()
{
	int Number;

	cout << "Please Enter a Number :" << endl;
	cin >> Number;

	return Number;
}
int ReadExponent()
{
	int Exponent;

	cout << "Please Enter the Maximum Exponent: " << endl;
	cin >> Exponent;

	return Exponent;
}

int CalculatePower(int Number , int exponent)
{
	return pow(Number, exponent);
}
void PrintResult(int Number , int result , int Exponent)
{
	
	cout << Number << " to the power of " << Exponent << " = " << result << endl;
		
}
int main()
{
	int Number = ReadUserNumber();
	int Exponent = ReadExponent();
	int Result = 0;
	
	for (int i = 2; i <= Exponent; i++)
	{
		Result = CalculatePower(Number, i);
		PrintResult(Number, Result,i);
	}
	
	return 0;

}
