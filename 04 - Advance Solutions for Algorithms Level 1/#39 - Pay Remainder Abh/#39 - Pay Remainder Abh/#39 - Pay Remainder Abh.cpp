#include <iostream>
#include <string>
using namespace std;

int ReadPositiveNumber(string Message)
{
	int Number;
	do
	{
		cout << Message << endl;
		cin >> Number;
	} while (Number < 0);


	return Number;
}
int CalculateRimender(int TotalBill, int CashPaid)
{
	return CashPaid - TotalBill;
}
void PrintResult(int TotalBill, int CashPaid)
{
	cout << "Total Bill : " << TotalBill << endl;
	cout << "Cash Paid : " << CashPaid << endl;
	cout << "**********************************" << endl;

	cout << CalculateRimender(TotalBill, CashPaid) << endl;

}
int main()
{
	int TotalBill = ReadPositiveNumber("Please enter TotalBill : ");
	int CashPaid = ReadPositiveNumber("Please enter CashPaid : ");
	PrintResult(TotalBill, CashPaid);

	return 0;
}
