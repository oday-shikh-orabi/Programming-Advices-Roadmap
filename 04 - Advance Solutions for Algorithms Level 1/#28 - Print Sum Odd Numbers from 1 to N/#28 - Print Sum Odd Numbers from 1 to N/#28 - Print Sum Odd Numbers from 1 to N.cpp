#include <iostream>
using namespace std;

enum enOddOrEven{Odd , Even};

int ReadNumber()
{
	int Number;
	cout << "Pleas Enter Number : " << endl;
	cin >> Number;

	return Number;
}
enOddOrEven OddOrEven(int Counter) // ������ ������ ��� ����� ��� ���� ��� ���� �������� ���
{
	if (Counter % 2 != 0)
		return enOddOrEven::Odd;
	else
		return enOddOrEven::Even;
}
int SumOddNumberUsing_For(int N)
{
	int sum = 0;
	for (int i = 1; i <= N; i++) // ����� ��� �� ��� �� ������ ������ ��� �� ���� �� �� ��� �� ���� ���� �� ���� 2 2 
		                         //���� ���� ���� ��� ����� ��� ���� ������ �� ��
	{
		if(OddOrEven(i) == enOddOrEven::Odd)
			sum += i;
		
	}

	return sum;
}
int SumOddNumberUsing_DoWhile(int N)
{
	int sum = 0;
	int i = 1;
	do
	{
		if (OddOrEven(i) == enOddOrEven::Odd)
		{
			sum += i;
		}
		i ++;
	} while (i <= N);

	return sum;
}
int SumOddNumberUsing_While(int N)
{
	int sum = 0;
	int i = 1;

	while (i <= N)
	{
		if (OddOrEven(i) == enOddOrEven::Odd)
		{
			sum += i;
		}

		i ++;
	}

	return sum;
}
void PrintResult(int sum)
{
	cout << "Sum odd Number Is : " << sum << endl;
}
int main()
{
	int N = ReadNumber();
	PrintResult(SumOddNumberUsing_For(N));
	PrintResult(SumOddNumberUsing_DoWhile(N));
	PrintResult(SumOddNumberUsing_While(N));

}
