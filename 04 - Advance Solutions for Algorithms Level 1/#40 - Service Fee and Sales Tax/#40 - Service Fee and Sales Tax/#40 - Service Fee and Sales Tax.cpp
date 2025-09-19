#include <iostream>
#include <string>
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
float CalculateServices(float TotalBill , float &ServicesFee , float &SalesTax)
{
	ServicesFee = TotalBill * 0.1;
	TotalBill += ServicesFee;
	SalesTax = TotalBill * 0.16;
	TotalBill += SalesTax;

	return TotalBill;
}
void PrintTotalBill(float TotalBill, float ServicesFee, float SalesTax)
{
	cout << "ServicesFee : " << ServicesFee << endl;
	cout << "SalesTax : " << SalesTax << endl;
	cout << "************************************" << endl;

	cout << "Total Bill : " <<  TotalBill << endl;
}
int main()
{
	float ServicesFee, SalesTax;
	float TotalBill1 = ReadPositiveNumber("Please enter total bill : ");
	float TotalBill2 = CalculateServices(TotalBill1, ServicesFee, SalesTax);
	PrintTotalBill(TotalBill2, ServicesFee, SalesTax);
}
