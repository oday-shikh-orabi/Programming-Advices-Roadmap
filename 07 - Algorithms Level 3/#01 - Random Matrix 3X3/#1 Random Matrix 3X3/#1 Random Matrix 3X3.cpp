#include <iostream>
#include <vector>
#include "MyLib.h"
#include <time.h>

using namespace std;
using namespace MyLib;

int main()
{
	srand((unsigned)time(NULL));
	int Matrix[9];
	
	for (int i = 0; i < 9; i++)
	{
		Matrix[i] = MyLib::RandomNumber(1, 100);
	}

	cout << "The Following is a 3X3 random Matrix:" << endl;
	for (int i = 1; i <= 9; i++)
	{

		cout << Matrix[i-1] << MyLib::Tap(1);

		if(i % 3 == 0)
		{
			cout << endl;
		}
		
	}
}
 
//vector<int> Mat;


	//������� ��� ����� ��� ���� ���� �������� �� �������� ��� 
	// ���� �� ��������� ������ ����� ������� ��� ��� ��� ���� �������� ��� ���� ���� ��� �� ������� �� ������ ��� ������ �������

	/*for (int Number : Mat) ��� ��� ������ ����� ���� ������ ����� ��� ��������� �� ���� ���
	{
		Number = MyLib::RandomNumber(1, 100); // ��� ��� ������ ������� ����� ���� ��� ����� ��� Main
		v.push_back(value);
	}
	*/
