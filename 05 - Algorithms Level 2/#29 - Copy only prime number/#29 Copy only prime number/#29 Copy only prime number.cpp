#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

enum enPrimeNotPrime { Prime = 1, NotPrime = 2 };
int RandomNumber(int From, int To)
{
	int randnum = rand() % (To - From + 1) + From;

	return randnum;
}
void FillArrayWithRandomNumbers(int* numbers, int& lengthArray)
{
	do
	{
		cout << "Please Enter a Positive Number : " << endl;
		cin >> lengthArray;
	} while (lengthArray < 0);

	for (int i = 0; i < lengthArray; i++)
	{
		numbers[i] = RandomNumber(1, 100);
	}

}
void PrintArray(int number[100], int lengthArray)
{
	for (int i = 0; i < lengthArray; i++)
	{
		cout << number[i] << " ";
	}
	cout << endl;
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
void CopyOnlyPrimeNumber(int* originalArray, int* PrimeNumberArray, int lengthArray , int& arr2length)
{
	for (int i = 0; i < lengthArray; i++)
	{
		if (CheckIsPrimeNumber(originalArray[i]) == enPrimeNotPrime::Prime)
		{
			PrimeNumberArray[arr2length] = originalArray[i];
			arr2length++;

		}

	}
}
int main()
{
	srand((unsigned)time(NULL));

	int arr[100], lengthArray;

	FillArrayWithRandomNumbers(arr, lengthArray);

	int  arr2[100] ;
	int CountPrime = 0;
	CopyOnlyPrimeNumber(arr, arr2, lengthArray , CountPrime);

	cout << "Array 1 Elements : ";
	PrintArray(arr, lengthArray);
	cout << "Array 2 Elements After Copy : ";
	PrintArray(arr2, CountPrime ); // ÕÍíÍ Úã íßæä ÇáßæäÊ ÈÑÇíã ÒÇíÏ ÎÇäÉ ÈÓ ÇáÇÕá ÇäÇ ÍÇØÊ ÚÏÏ ÇáÎÇäÇÊ 100
	                                               // íÚäí ÇäÇ ãæ åáÞ Úã ÇäÔÃ ÇáÎÇäÇÊ (ÈÇáÚÏÇÏ) ÇäÇ äÇÔÆåã æãÎáÕ
	                                              // ÝÇäÇ åíß Èßæä Úã ÇÓÊÎÏã ãä ÇáÎÇäÇÊ ÝÞØ Úáì ÚÏÏ ÇáÎÇäÇÊ ÇáÇÚÏÇÏ ÇáÇæáíÉ 
	                                             // ãÇ áÇÒã ÊÍØ äÇÞÕ áÇä ÈÝÇäßÔä ÇáÈÑäÊ ÇäÊ ÈÇáÔÑØ ÍÇØÊ ÇÕÛÑ
	                                            // ÇÐÇ ÈÏß ÊÍØ äÇÞÕ ãÔÇä ÇáÎÇäÉ ÇáÇÎíÑÉ ÇáÝÇÖíÉ íáí Úã ÊäÖÇÝ 
	                                            // ÈÏß ÊÍØ íÓÇæí ÈÇáÔÑØ áÇä ÇäÊ ÇáãØáæÈ ÊãÔí Úáì ÚÏÏ ÇáÎÇäÇÊ íáí Ýíåã ÇÚÏÇÏ 
	                                            // ÇæáíÉ ÝÞØ
	                                            // ÇáßæäÊ ÈÑÇíã åí ÚÏÏ ÚäÇÕÑ ÇáãÕÝæÝÉ (ÇáØæá) ÝãÇ ÈÊÎáíåÇ ÊÈáÔ ãä -1 
	                                            // áÇäåÇ åí ÚÏÏ ÇáÚäÇÕÑ ãæ ÇßÈÑ ÝåÑÓ 
	                                             // æÈÊÒÈØ ÇáÝåÑÓ Úáì åá ÇÓÇÓ
	                                              // æØÇáãÇ åí ßæäÊ ÈÑÇíã ãæ ÇßÈÑ ÝåÑÓ ÝÈÊÎáí ÇáÒíÇÏÉ ÈÚÏ ÇáÇÓäÇÏ

	return 0;
}
