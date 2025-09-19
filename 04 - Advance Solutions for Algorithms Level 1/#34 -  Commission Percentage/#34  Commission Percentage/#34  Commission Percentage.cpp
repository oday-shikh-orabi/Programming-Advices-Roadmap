#include <iostream>
using namespace std;

float ReadTotalSales()
{
	float TotalSales;
	cout << "Please Enter TotalSales : " << endl;
	cin >> TotalSales;

	return TotalSales;
}
float GetPercentageCommission(float TotalSale)
{
	if (TotalSale >= 1000000)
	{
		return  0.01;
	}
	else if (TotalSale >= 500000 ) // ��� ��� ��� ������ �� ���� �� ����� ����� �� ������ else if �� ���
	{
		return  0.02;
	}
	else if (TotalSale >= 100000 )
	{
		return  0.03;
	}
	else if (TotalSale >= 50000 )
	{
		return  0.05;
	}
	else
		return 0.00;
		//TotalSale * 0.00; ��� �� ����� ��� ��� ��� �� �����
}
float CalculateTotalCommission(float TotalSales )
{
	return GetPercentageCommission(TotalSales) * TotalSales;
}
void PrintResult(float Commission , float Percentage)
{
	cout << "Commission Percentage :" << Percentage << endl;

	cout << "Total Commission :" << Commission << endl;
}
int main()
{
	float TotalSales = ReadTotalSales();
	float Percentage = GetPercentageCommission(TotalSales);
	PrintResult(CalculateTotalCommission(TotalSales), Percentage);
     
	return 0;
}