#include <iostream>
using namespace std;

int main() {
    void* ptr; // ��� ��� ������ �������� ����� ��� ����� ������� ����� ����� ����� ���� ���
    float f1 = 10.5;
    int x = 50;

    ptr = &f1;
    cout << ptr << endl;                                 // ����� ������� f1
    cout << *(static_cast<float*>(ptr)) << endl;         // ����� ���� f1 ��� �������
   // �� ������ ��� �������� ���� �� ���� ���� ������ �� ���� ������ ��� ���� ������� �� ��� ������ �������� ��� ������� ����� ���� ������

    ptr = &x;
    cout << ptr << endl;                                 // ����� ������� x
    cout << *(static_cast<int*>(ptr)) << endl;           // ����� ���� x ��� �������

    return 0;
}
