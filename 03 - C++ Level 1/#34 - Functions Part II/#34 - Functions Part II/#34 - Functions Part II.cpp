#include <iostream>
using namespace std;
void MySumProseger()
{
    int x, y;
    cout << "Plaeas Enter Number : \n";
    cin >> x;
    cout << "Plaeas Enter Number : \n";
    cin >> y;
    cout << "***************************\n";
    cout << x + y;
    return;
}
int MySumFunction()
{
    int x, y;
    cout << "Plaeas Enter Number : \n";
    cin >> x;
    cout << "Plaeas Enter Number : \n";
    cin >> y;
    cout << "***************************\n";
    return x + y;
}
int main()
{
    //MySumProseger();
    //MySumFunction(); \\������� �������� �� ������� �� �� ������ ������ ������� ���������
    cout << MySumFunction() << endl; // ��� �������� �������� ����� ������ ��� ������ ���� ����� �����
    cout << round( MySumFunction()) ;
}