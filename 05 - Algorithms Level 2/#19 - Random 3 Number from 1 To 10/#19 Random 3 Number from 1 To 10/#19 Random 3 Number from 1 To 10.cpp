#include <iostream>
#include <cstdlib>
using namespace std;

                                              //��� �������� ��� ���� ���� ����
int RandomNumber(int From, int To)
{
	int randnum = rand() % (To - From + 1) + From;

	return randnum;
}
int main()
{
	srand((unsigned)time(NULL));

	/*cout << rand() % 10 << endl;  //endl ��� ����� ����� ��� ���� ������� ��� ��� ��� �� ����� ���� ������
	cout << rand() % 10 << endl; 
	cout << rand() % 10 << endl;*/

	//cout << rand() << endl; //����� ��� �� 0 � ���� ��� �����

	cout << RandomNumber(0, 10) << endl;
	cout << RandomNumber(0, 10) << endl;
	cout << RandomNumber(0, 10) << endl;

}
