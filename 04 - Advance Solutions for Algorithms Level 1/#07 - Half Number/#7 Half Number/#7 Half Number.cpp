#include <iostream>
using namespace std;

int fnReadNumber()
{
    int Number;
    cout << "Enter Number :" << endl;
    cin >> Number;

    return Number;
}
float fnHalfNumber(int Number)
{
    float HalfNumber = Number / 2; //�� ���� ���� ���� ����� ����� ����� ���� ��� ���� ������ ���� �����

    return HalfNumber;
}
void fnPrintHalfNumber(float HalfNumber)
{
    cout << "Half Number Is : " << HalfNumber << endl;
}
float main()
{
    fnPrintHalfNumber(fnHalfNumber(fnReadNumber()));

    return 0;
}
