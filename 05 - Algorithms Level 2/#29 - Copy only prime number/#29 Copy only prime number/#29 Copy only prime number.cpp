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
		// �� ��� ���� ��� ���� ���� �� ��� ��� ������ ��� ��� ��� ���� ������� ������� �� ��� ���� ������� ����� ��� �����1 ���� ������
		// ��� �� ��
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
	PrintArray(arr2, CountPrime ); // ���� �� ���� ������ ����� ���� ���� �� ����� ��� ���� ��� ������� 100
	                                               // ���� ��� �� ��� �� ���� ������� (�������) ��� ������ �����
	                                              // ���� ��� ���� �� ������ �� ������� ��� ��� ��� ������� ������� ������� 
	                                             // �� ���� ��� ���� ��� ������� ������ ��� ������ ���� ����
	                                            // ��� ��� ��� ���� ���� ������ ������� ������� ��� �� ����� 
	                                            // ��� ��� ����� ������ ��� ��� ������� ���� ��� ��� ������� ��� ���� ����� 
	                                            // ����� ���
	                                            // ������ ����� �� ��� ����� �������� (�����) ��� ������� ���� �� -1 
	                                            // ����� �� ��� ������� �� ���� ���� 
	                                             // ������ ������ ��� �� ����
	                                              // ������ �� ���� ����� �� ���� ���� ������ ������� ��� �������

	return 0;
}
