#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int& x = a;  // ������ x ���� ��� a

    cout << &a << endl; // ����� a
    cout << &x << endl; // ����� x (��� ����� a)

    cout << a << endl;  // ���� a
    cout << x << endl;  // ���� x (��� ���� a)

    int* p = &a;        // ������ p ���� ��� a
    cout << p << endl;  // ����� a (������ �� p)
    cout << *p << endl; // ������ �������� �� ������� (���� a)

    *p = 30;
    cout << p << endl;  // ����� a (������ �� p)
    cout << *p << endl;

    int b = 20;
    p = &b;             // ������ p ���� ���� ��� b
    cout << p << endl;  // ����� b
    cout << *p << endl; // ������ �������� �� b

    return 0;
}
