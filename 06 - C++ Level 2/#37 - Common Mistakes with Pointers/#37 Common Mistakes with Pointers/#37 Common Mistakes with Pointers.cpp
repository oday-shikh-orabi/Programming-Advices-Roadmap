#include <iostream>
using namespace std;

int main() {
    int x, * p;

    // ���: p �� ����� ��� x ��� �����
    // p = x;

    // ����: p �� ����� � &x �� �����
    p = &x;

    // ���: &x ����� ��� *p �� ����
    // *p = &x;

    // ����: *p �� ���ɡ � x ����
    *p = x;

    return 0;
}
