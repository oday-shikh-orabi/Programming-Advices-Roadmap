#include <iostream>
#include <string>
using namespace std;

int fnReadNumber()
{
    int Number;
    cout << "Enter Number :" << endl;
    cin >> Number;

    return Number;
}
float fnCalculateHalfNumber(int Number)
{
     //�� ���� ���� ���� ����� ����� ����� ���� ��� ���� ������ ���� �����

    return (float) Number / 2;
}
void fnPrintHalfNumber(int Number)
{
    string Result = "Half Of " + to_string(Number) + " Is : " +to_string(fnCalculateHalfNumber(Number));
                           //����� ���� ������ ��� �� ���� ����� ���� ����� ������� ����� ������ �� ���� ��� ���� 
                          //��� ��� ����� ��� �������� ��� ��� ��� ���� ��� ��� ��� ��� ���� ���� �������
 // ���� ������ ������ ����� ����� ��� ������ ������� ��� �� ���� ���� ���� ������� ��� ����� ��� ����� ������
    cout << Result << endl;

}
float main()
{
    fnPrintHalfNumber(fnReadNumber());

    return 0;
}
