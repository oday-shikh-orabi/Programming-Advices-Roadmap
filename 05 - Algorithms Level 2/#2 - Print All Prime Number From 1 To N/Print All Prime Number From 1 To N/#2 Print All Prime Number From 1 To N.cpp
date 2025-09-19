#include <iostream>
#include <string>
using namespace std;

enum enPrimeNotPrime{Prime = 1 , NotPrime = 2};
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
enPrimeNotPrime CheckIsPrimeNumber(int Number)
{
	if (Number == 1)
	{
		return enPrimeNotPrime::NotPrime;
	}

	if (Number <= 3)
	{
		return enPrimeNotPrime::Prime;
	}

		for (int i = 2; i < Number;i++)
	{
		if (Number % i == 0)
		{
			return enPrimeNotPrime::NotPrime;
		}
		// åæ ÚÏÏ Çæáí ÍÊì íÏÎá ÇáÇÝ Çí Çäå ÞÈá ÇáÞÓãÉ Úáì ÚÏÏ ÛíÑ äÝÓå æÇáæÇÍÏ ÈÇáÊÇáí åæ ÛíÑ Çæáí ÈíÑÌÚáí æÈØáÚ ÈÑÇ ÇáßæÏ1 íÇåÇ ÇØÈÚåÇ
		// ÇÐÇ ãÇ ÑÌ
	}
	//defult
	return enPrimeNotPrime::Prime;
}
void PrintPrimeNumbersFrom1ToN(int N)
{
	cout << endl;
	cout << "Prime Numbers From 1 To " << N << " are : " << endl;
	for (int i = 1; i <= N; i++)
	{
		if (CheckIsPrimeNumber(i) == enPrimeNotPrime::Prime)
			cout << i << endl;
	}

}

int main()
{
	PrintPrimeNumbersFrom1ToN(ReadPositiveNumber("Pleas Enter A Positive Number ? "));
}
