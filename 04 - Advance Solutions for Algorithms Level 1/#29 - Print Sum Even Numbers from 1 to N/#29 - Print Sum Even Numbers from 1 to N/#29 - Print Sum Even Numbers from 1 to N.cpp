#include <iostream>
using namespace std;

int ReadNumber()
{
	int Number;
	cout << "Pleas Enter Number : " << endl;
	cin >> Number;

	return Number;
}
int SumEvenNumberUsing_For(int N)
{
	int sum = 0;
	for (int i = 0; i <= N; i += 2)
	{
		sum += i;
	}

	return sum;
}
int SumEvenNumberUsing_DoWhile(int N)
{
	int sum = 0;
	int i = 0;
	do
	{
		sum += i;
		i += 2;
	} while (i <= N);

	return sum;
}
int SumEvenNumberUsing_While(int N)
{
	int sum = 0;
	int i = 0;

	while (i <= N)
	{
		sum += i;
		i += 2;
	}

	return sum;
}
void PrintResult(int sum)
{
	cout << "Sum Even Number Is : " << sum << endl;
}
int main()
{
	int N = ReadNumber();
	PrintResult(SumEvenNumberUsing_For(N));
	PrintResult(SumEvenNumberUsing_DoWhile(N));
	PrintResult(SumEvenNumberUsing_While(N));

}
