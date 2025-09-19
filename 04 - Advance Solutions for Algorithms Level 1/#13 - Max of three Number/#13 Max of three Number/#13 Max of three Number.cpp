#include <iostream>
using namespace std;

void fnReadNumbers(int& Num1, int& Num2 , int& Num3)
{
	cout << "Pleas Enter First Number : " << endl;
	cin >> Num1;
	cout << "Pleas Enter Second Number : " << endl;
	cin >> Num2;
	cout << "Pleas Enter Therd Number : " << endl;
	cin >> Num3;

}
int fnCheckMaxOf2Number(int Num1, int Num2 , int Num3)
{
	if (Num1 > Num2)
	{
		if (Num1 > Num3)
			return Num1;
		//else
			//return Num3; İíß ÊÍØåÇ æİíß áÇ ÈÓ áÇä ÑÍ íãÔí áÈÇŞí ÇáßæÏ ÚÇáÍÇáÊíä
	}
	else if (Num2 > Num3)
		return Num2;
	else 
		return Num3;
}
void fnPrintMaxNumber(int MaxNumber)
{
	cout << "Max Number Is : " << MaxNumber;
}

int main()
{
	int Num1, Num2 , Num3;
	fnReadNumbers(Num1, Num2 , Num3);
	fnPrintMaxNumber(fnCheckMaxOf2Number(Num1, Num2, Num3));

	return 0;
}
