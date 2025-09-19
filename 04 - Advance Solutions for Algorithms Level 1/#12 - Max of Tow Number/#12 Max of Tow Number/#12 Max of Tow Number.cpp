#include <iostream>
using namespace std;

void fnReadNumbers(int &Num1 , int &Num2)
{
	cout << "Pleas Enter First Number : " << endl;
	cin >> Num1;
	cout << "Pleas Enter Second Number : " << endl;
	cin >> Num2;

}
int fnCheckMaxOf2Number(int Num1 , int Num2)
{
	if (Num1 > Num2)
		return Num1;
	else
		return Num2;
}
void fnPrintMaxNumber(int MaxNumber)
{
	cout << "Max Number Is : " << MaxNumber;
}

int main()
{
	int Num1, Num2;
	fnReadNumbers(Num1, Num2);
	fnPrintMaxNumber(fnCheckMaxOf2Number(Num1, Num2));

	return 0;
}
