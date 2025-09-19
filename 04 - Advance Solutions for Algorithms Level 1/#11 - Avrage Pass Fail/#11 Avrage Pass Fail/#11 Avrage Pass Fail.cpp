#include <iostream>
using namespace std;

enum enPassFail { Pass, Fail };
void Read3Number(int& Num1, int& Num2, int& Num3)
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
float CalculateAvrage(int Num1, int Num2, int Num3)
{
	return (float)Sum3Number(Num1, Num2, Num3) / 3;
}
enPassFail fnCheackPassFail(int Num1, int Num2, int Num3)
{
	if (CalculateAvrage(Num1, Num2, Num3) >= 50)
		return enPassFail::Pass;
	else
		return enPassFail::Fail;

}
void fnPrintResult(int Num1, int Num2, int Num3)
{
	cout << "Avrage Is : " << CalculateAvrage(Num1, Num2, Num3) << endl;
	if (fnCheackPassFail(Num1, Num2, Num3) == enPassFail::Pass)
		cout << "Result Is : Pass" << endl;
	else
		cout << "Result Is : Fail" << endl;
}
int main()
{
	int Num1, Num2, Num3;
	Read3Number(Num1, Num2, Num3);
	fnPrintResult(Num1, Num2, Num3);
	return 0;
}
