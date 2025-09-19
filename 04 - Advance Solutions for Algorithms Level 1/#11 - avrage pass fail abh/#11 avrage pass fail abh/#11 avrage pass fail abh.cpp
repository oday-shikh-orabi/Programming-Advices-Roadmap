#include <iostream>
using namespace std;

enum enPassFail { Pass, Fail };
void Read3Number(int& Num1, int& Num2, int& Num3)
{

	cout << "Pleas Enter Mark 1 ? " << endl;
	cin >> Num1;
	cout << "Pleas Enter Mark 2 ? " << endl;
	cin >> Num2;
	cout << "Pleas Enter Mark 3 ? " << endl;
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
enPassFail fnCheackPassFail(float Avrage)
{
	if (Avrage >= 50)
		return enPassFail::Pass;
	else
		return enPassFail::Fail;

}
void fnPrintResult(float Avrage)
{
	cout << "Your Avrage Is : " << Avrage << endl;
	if (fnCheackPassFail(Avrage) == enPassFail::Pass)
		cout << "You Passed" << endl;
	else
		cout << "You Failed" << endl;
}
int main()
{
	int Num1, Num2, Num3;
	Read3Number(Num1, Num2, Num3);
	fnPrintResult(CalculateAvrage(Num1, Num2, Num3));
	return 0;
}
