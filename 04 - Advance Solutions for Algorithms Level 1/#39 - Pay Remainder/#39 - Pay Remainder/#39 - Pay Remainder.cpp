#include <iostream>
using namespace std;

int ReadTotalBaill()
{
	int TotalBaill;
	cout << "Please enter total baill : " << endl;
	cin >> TotalBaill;

	return TotalBaill;
}
int ReadCashPiad()
{
	int CashPiad;
	cout << "Please enter cash piad : " << endl;
	cin >> CashPiad;

	return CashPiad;
}

int CalculateRemainingAmount()
{
	int TotalBaill = ReadTotalBaill();
	int CashPiad = ReadCashPiad();

	return CashPiad - TotalBaill;
}
void PrintRemainingAmount(int RemainingAmount)
{
	cout << "RemainingAmount = " << RemainingAmount << endl;
}
int main()
{
	PrintRemainingAmount(CalculateRemainingAmount());

	return 0;
}
