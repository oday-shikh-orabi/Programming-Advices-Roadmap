#include <iostream>
using namespace std;

int Number[3];
void Read3Number()
{

	cout << "Pleas Enter First Number : " << endl;
	cin >> Number[0];
	cout << "Pleas Enter Second Number : " << endl;
	cin >> Number[1];
	cout << "Pleas Enter Therd Number : " << endl;
	cin >> Number[2];
}
int Sum3Number()
{
	return Number[0] + Number[1] + Number[2];
}
void fnPrintResult()
{
	cout << "Sum Is : " << Sum3Number();
}
int main()
{
	Read3Number();
	fnPrintResult();

	return 0;
}
