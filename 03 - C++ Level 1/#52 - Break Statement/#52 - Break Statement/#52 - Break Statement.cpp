#include <iostream>
using namespace std;

int main()
{
    int Number[10] = { 10,20,44,55,33,22,99,88,99,100 };
    int SerchFor = 20;

    for (int i = 0; i <= 10; i++)
    {
        if (SerchFor == Number[i])
        {
            cout << "Number[" << i << "] = " << Number[i] << endl;
            break;
        }
    }
    
    //���� �� ��� ���� �� ��� �� ������� �� ����� ������ ������ ����� ���� ��� ����� ���� �������� ����
    //���� ��� �������� ������ �� ����� ������ ����� ��� ���� ��� ����� ��� ��������� ������� ���� ����

    return 0;
}
