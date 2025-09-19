#include <iostream>
using namespace std;

void Read3Number(int &Num1, int &Num2, int &Num3)
{
	
	cout << "Pleas Enter First Number : " << endl;
	cin >> Num1;
	cout << "Pleas Enter Second Number : " << endl;
	cin >> Num2;
	cout << "Pleas Enter Therd Number : " << endl;
	cin >> Num3;

}
int Sum3Number(int Num1, int Num2, int Num3)
{
	return Num1 + Num2 + Num3;
}
void fnPrintResult(int Result)
{
	cout << "Sum Is : " << Result;
}
int main()
{
	int Num1, Num2, Num3;
	Read3Number(Num1, Num2, Num3);
	fnPrintResult(Sum3Number(Num1, Num2, Num3));
	return 0;
}
