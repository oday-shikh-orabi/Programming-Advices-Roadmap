#include <iostream>
using namespace std;

int ReadPositveNumber(string Message)
{
	int Number;
	do
	{
		cout << Message << endl;
		cin >> Number;
	} while (Number < 0);

	return Number;
}
int ReadAnswer(string Message)
{
	int Number;
	do
	{
		cout << Message << endl;
		cin >> Number;
	} while (Number != 0 && Number != 1);

	return Number;
}
void ReadNumbers(int* arr, int& CountIndex )
{
	
	int Answer =0;
	do
	{
		int Num = ReadPositveNumber("Please Enter a Number ?");
		arr[CountIndex] = Num;
		Answer = ReadAnswer("Do you Want To Add More Number ? [0]:No , [1]:Yes");
		
		CountIndex++;
	} while (Answer == 1);

}
void PrintArrayElements(int* arr , int lengthArray)
{
	cout << "Array Length : " << lengthArray << endl;
	cout << "Array Elements : ";
	
	for (int i = 0; i < lengthArray ; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}
int main()
{
	int arr[100];
	int CountIndex = 0;
	ReadNumbers(arr, CountIndex);
	PrintArrayElements(arr, CountIndex);
	

	return 0;
}
