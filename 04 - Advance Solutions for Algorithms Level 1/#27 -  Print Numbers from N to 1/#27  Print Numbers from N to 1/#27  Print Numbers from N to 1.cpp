#include <iostream>
using namespace std;

int ReadEndNum()
{
    int Number;

    cout << "Pleas Enter Number : " << endl;
    cin >> Number;

    return Number;
}
void PrintRangeFromNTo1_UsingFor(int N)
{
    cout << "\n";

    for (int i = 1; i <= N; N--)
    {
        cout << N << endl;
    }
}
void PrintRangeFromNTo1_UsingDoWhile(int N)
{
    cout << "\n";
    int i = 1;
    do
    {
        cout << N << endl;
        N--;
    } while (i <= N);
}
void PrintRangeFromNTo1_UsingWhile(int N)
{
    cout << "\n";
    int i = 1;
    while (i <= N)
    {
        cout << N << endl;
        N--;
    }

}
int main()
{
    int N;
    N = ReadEndNum();

    PrintRangeFromNTo1_UsingFor(N); //(ReadEndNum()); //��� ��� ���� ����� ��� ���� �� ��� ���� �� ��� �������� ���� ����� ��� �����
                                    //��� �� ��� ��� ����� ����� ����� ���� �� ��� �� ������ ��������
    PrintRangeFromNTo1_UsingDoWhile(N);
    PrintRangeFromNTo1_UsingWhile(N);

    return 0;
}
