#include <iostream>
#include <string>
using namespace std;

string ReadYourName()
{
	string Name;
	cout << "Plz Enter Your Name : \n";
	getline( cin ,Name);
	//��� ���� ��� ������ �� ����� �� ��� ������
	return Name;
}
void PrintYourName(string Name)
{
	cout << "Your Name Is :" << Name << endl;
}
int main()
{
	
	PrintYourName(ReadYourName());

	//������� ������ ������� �������� ��� ��� ��� ��� �� ���� ��� �� ������ ������ ������� ������� ������ ��� ��� �����
	return 0;
}
