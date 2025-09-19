#include <iostream>
using namespace std;

float ReadPositiveNumber(string Message)
{
	float Number;
	do
	{
		cout << Message << endl;
		cin >> Number;
	} while (Number < 0);


	return Number;
}
float CalculateDaysFrom(float Hour)
{
	float Days = Hour / 24;

	return Days;
}
float CalculateWeaksFrom(float Days)
{
	float Weaks = Days / 7;

	return Weaks;
}
void PrinDaysAndWeaks(float Hours,float Days ,float Weaks)
{
	cout << "\n";
	cout << Hours << " Hours" << endl;
	cout << Days << " Days" << endl;
	cout << Weaks << " Weaks" << endl;

}
int main()
{
	float Hours = ReadPositiveNumber("Please Enter Hours : ");
	float Days = CalculateDaysFrom(Hours);
	float Weaks = CalculateWeaksFrom(Days);
	PrinDaysAndWeaks(Hours,Days, Weaks);

	return 0;
}
