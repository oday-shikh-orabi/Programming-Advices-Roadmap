#include <iostream>
using namespace std;

enum enResult{Hired , Rejected};
struct stInfo
{
	unsigned int Age;
	bool hasDriverLicense;
};
stInfo fnReadInfo()
{
	stInfo Info;
	cout << "Plz Enter Your Age : " << endl;
	cin >> Info.Age;
	cout << "Plz Enter \"1\" if You have DriverLicense Or \"0\" : " << endl;
	cin >> Info.hasDriverLicense;

	return Info;
}
bool IsAccebted(stInfo Info)
{
	return (Info.Age > 21 && Info.hasDriverLicense == true);
}
void PrintResult(stInfo Info)
{
	if (IsAccebted(Info))// ��������� �� ������� ��� ����� ���� ��� ���� ���� ������� �� ���� ���� ����� �������� ������
	{                    // �������� ������ ����� ������� ���� ������ ����� ��� �� �� ���� ������ �����
		cout << "Hired";
	}
	else
		cout << "Rejected";
}
int main()
{
	PrintResult(fnReadInfo());
}
