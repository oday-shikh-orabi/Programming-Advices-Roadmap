#include <iostream>
using namespace std;

void fnRead2Number(int &Num1 , int &Num2 )
{
    cout << "Pleas Enter Number 1 ?" << endl;
    cin >> Num1;
    cout << "Pleas Enter Number 2 ?" << endl;
    cin >> Num2;

}
void fnSwap2Number(int& A, int& B) // �� ���� �� ��� ����� ��� ������� ����� ��� ��� ���� ������� �� �� ��� ���
                                   // ���� ����� ��� 
                                   // a
                                   // ����� ��� 
                                   // num1 
                                   // ��� �� ���� ��� ���
{
    int Tumb;// ���� ���� ��� ������ ��� ����� ���� �����
             // ����
    Tumb = A;
    A = B;
    B = Tumb;
}
void fnPrintResult(int Num1, int Num2)
{
    cout << "\nNumber 1 Is : " << Num1 << endl;
    cout << "Number 2 Is : " << Num2 << endl;

}
int main()
{
    int Num1, Num2, Num3;
    fnRead2Number(Num1 , Num2);
    fnPrintResult(Num1, Num2);
    fnSwap2Number(Num1, Num2);
    fnPrintResult(Num1, Num2);

    return 0;
}
