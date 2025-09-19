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
void FillArrayWithRandomNumbers(int* originalArray, int& originalLength)
{
	do
	{
		cout << "Please Enter a Positive Number : " << endl;
		cin >> originalLength;
	} while (originalLength < 0);

	for (int i = 0; i < originalLength; i++)
	{
		originalArray[i] = RandomNumber(1, 100);
	}

}
void PrintArray(int* number, int lengthArray)
{
	for (int i = 0; i < lengthArray; i++)
	{
		cout << number[i] << " ";
	}
	cout << endl;
}
void AddArrayElement(int Number, int arr[100], int& arrLength)
{
	arrLength++;
	arr[arrLength - 1] = Number;
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
void CopyPrimeNumbers(int* originalArray, int& originalLength, int* copiedArray, int& copiedLength)
{
	for (int i = 0; i < originalLength; i++)
	{
		if (CheckIsPrimeNumber(originalArray[i]) == enPrimeNotPrime::Prime)
		{
			AddArrayElement(originalArray[i], copiedArray, copiedLength);
		}
	}
}
int main()
{
	srand((unsigned)time(NULL));

	int arr[100], originalLength = 0; 
	int  arr2[100], copiedLength = 0;

	FillArrayWithRandomNumbers(arr, originalLength);
	CopyPrimeNumbers(arr, originalLength, arr2, copiedLength);

	cout << "Array 1 Elements : ";
	PrintArray(arr, originalLength);
	cout << "Array 2 Prime Numbers : ";
	PrintArray(arr2, copiedLength);

	return 0;
}
