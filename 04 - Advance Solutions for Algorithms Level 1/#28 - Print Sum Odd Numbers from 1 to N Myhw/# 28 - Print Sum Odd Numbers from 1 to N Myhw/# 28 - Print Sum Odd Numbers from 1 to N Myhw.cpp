#include <iostream>
using namespace std;


//////////////////////////////������ ������ ������� �� 1 ���* ���� ��� ���� �� ���� �� ���� �� ��� ������� �������///////////////////////////////////////////////////////////////


enum enOddOrEven {All = 1 , Odd = 2, Even = 3 , Other =4};

int ReadNumber()
{
	int Number;
	cout << "Pleas Enter Number : " << endl;
	cin >> Number;
	
	return Number;
}
int ReadUserChoice() //(������� ������ ���� ���� ����� ���� (����
{
	int Choice;
	cout << "Enter What Do You Want To Sum : \n";
	cout << "1) All \n";
	cout << "2) Odd \n";
	cout << "3) Even \n";
	cin >> Choice;

	return Choice;
}
bool ShouldIncludeNumber(int  Choice, int Counter)
{
	if (Choice == enOddOrEven::All)
		return true;
	else if ((Choice == enOddOrEven::Odd) && (Counter % 2 != 0))
		return true;
	else if ((Choice == enOddOrEven::Even) && (Counter % 2 == 0))
		return true;
	else
		return false; //���� ��� ��� ���� �� ������ ������ ��� ��� �� ���� �� ���
}
int SumNumbersUsing_For(int Choice, int N) // �� ��� �� ����� ��� ����� ����� ����� ���� ����� ����
{
	int sum = 0;
	for (int i = 1; i <= N; i++) 
	{
		if (ShouldIncludeNumber(Choice,i ))
			sum += i;
	}

	return sum;
}
void PrintResult(int sum)
{
	cout << "Sum Numbers Is : " << sum << endl;
}
int main()
{
	int number = ReadNumber();
	int choice = ReadUserChoice();

	PrintResult(SumNumbersUsing_For(choice,number )); //���� �� ���� ���� �� ������ ���� ���������� ��� ����� ����� ����
	                                                  //�� ������ ��� ������ ������ �������� ������� ��� ������� ������� ������
	                                                  //����� ����� ������� �������� ���� �� ����� �������� ��� ���� �
	

}
