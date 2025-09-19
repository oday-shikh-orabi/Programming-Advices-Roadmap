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
float ReadMonthlyPayment()
{
	return ReadPositiveNumber("Pleas Enter Monthly Payment : ");
}
float CalculateMonthsToSttleTheLoan(float LoanAmount ,float MonthlyPayment)
{
	return LoanAmount / MonthlyPayment;
}
void PrintMonthsToSttleTheLoan(float MonthsToSttleTheLoan)
{
	cout << endl;
	cout << "Total Month To Pay : " << MonthsToSttleTheLoan << endl;
}
int main()
{
	float LoanAmount = ReadLoanAmount();
	float MonthlyPayment = ReadMonthlyPayment();

	PrintMonthsToSttleTheLoan(CalculateMonthsToSttleTheLoan(LoanAmount, MonthlyPayment));

	return 0;
}
