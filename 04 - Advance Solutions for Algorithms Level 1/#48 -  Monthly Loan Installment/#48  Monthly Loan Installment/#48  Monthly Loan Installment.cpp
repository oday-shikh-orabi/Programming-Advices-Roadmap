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
float ReadLoanAmount()
{
	return ReadPositiveNumber("Pleas Enter Loan Amount : ");
}
float ReadHowManyMonths()
{
	return ReadPositiveNumber("How Many Month : ");
}
float CalculateMonthlyInstallment(float LoanAmount, float HowManyMonths)
{
	return LoanAmount / HowManyMonths;
}
void PrintMonthlyInstallment(float MonthlyInstallment)
{
	cout << endl;
	cout << "Monthly Installment : " << MonthlyInstallment << endl;
}
int main()
{
	float LoanAmount = ReadLoanAmount();
	float MonthlyInstallment = ReadHowManyMonths();

	PrintMonthlyInstallment(CalculateMonthlyInstallment(LoanAmount, MonthlyInstallment));

	return 0;
}
