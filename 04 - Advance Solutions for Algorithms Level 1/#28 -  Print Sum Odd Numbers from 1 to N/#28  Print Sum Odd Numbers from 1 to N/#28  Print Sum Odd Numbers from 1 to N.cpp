#include <iostream>
using namespace std;

int ReadNumber()
{
	int Number;
	cout << "Pleas Enter Number : " << endl;
	cin >> Number;

	return Number;
}
int SumOddNumberUsing_For(int N)
{
	int sum = 0;
	for (int i = 1; i <= N; i += 2)
	{
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
		sum += i;
		i += 2;
	} while (i <= N);

	return sum;
}
int SumOddNumberUsing_While(int N)
{
	int sum = 0;
	int i = 1;
	
	while (i <= N)
	{
		sum += i;
		i += 2;
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
