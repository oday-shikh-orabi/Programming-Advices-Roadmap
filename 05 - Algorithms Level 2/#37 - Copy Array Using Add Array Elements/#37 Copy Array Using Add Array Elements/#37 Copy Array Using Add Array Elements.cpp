#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

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
void AddArrayElement(int Number, int arr[100], int& arrLength) //������ ������ ������ ����� ������� ��� ���� �� ������ ��� �����
                                                              // ���� �� ��� �������� �������� ������� ��� ������ ���� ������ ��
	                                                          // �� ������ ����� ��� ��� ���� �������� 
	                                                         // ������ ��� ��� ��� ����� ��� ��� ������ ����
	                                                         // ��� �� ��� ������� �� ����� �����
	                                                        // ������ �� ���� ������� ������� ����� �� ������� ��� ����� �����
	                                                        //������ ��� ��� ���� ��� �� �������� ������ ���
{                                                             
	arrLength++;
	arr[arrLength - 1] = Number; // ���� �� ������ ��� �� ��� ���� ��� ����� �� ���� ��� ����� ����� 
	                            //�� ����� ���� ���� 
								// �� ����� ��� �� ������ ��� �������� ������ ����� �� ��� ������ �� �������� �����
								// ��� ��� ������
	                            //��� ��� ����� ��� ��� ��� ���� �������� �� ����� ���� -1
}
void CopyArrayUsingAddArrayElements(int* originalArray, int& originalLength, int* copiedArray, int& copiedLength)
{
	for (int i = 0; i < originalLength; i++)
	{
		AddArrayElement(originalArray[i], copiedArray, copiedLength);
	}
}
int main()
{
	srand((unsigned)time(NULL));

	int arr[100], originalLength;
	int  arr2[100] , copiedLength = 0;

	FillArrayWithRandomNumbers(arr, originalLength);
	CopyArrayUsingAddArrayElements(arr, originalLength, arr2, copiedLength);
		
	cout << "Array 1 Elements : ";
	PrintArray(arr, originalLength);
	cout << "Array 2 Elements After Copy : ";
	PrintArray(arr2, copiedLength);

	return 0;
}
