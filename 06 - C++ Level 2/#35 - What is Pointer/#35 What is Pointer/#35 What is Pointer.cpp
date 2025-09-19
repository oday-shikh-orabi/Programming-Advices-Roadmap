#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int& x = a; // x �� ���� �� a

    cout << &a << endl; // ����� ������� a
    cout << &x << endl; // ����� ������ x (��� ����� a)

    cout << a << endl;  // ���� a
    cout << x << endl;  // ���� x (��� ���� a)

    x = 20; // ����� ���� ������ ���� a
    cout << a << endl;
    cout << x << endl;

    a = 30; // ����� a ���� ������
    cout << a << endl;
    cout << x << endl;

    return 0;
}
