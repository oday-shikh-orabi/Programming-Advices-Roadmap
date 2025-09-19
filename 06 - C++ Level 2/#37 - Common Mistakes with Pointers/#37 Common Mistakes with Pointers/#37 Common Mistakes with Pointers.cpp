#include <iostream>
using namespace std;

int main() {
    int x, * p;

    // ÎØÃ: p וז ÚהזÇה¡ ב‗ה x בםÓ ÚהזÇה
    // p = x;

    // ÕÍםÍ: p וז ÚהזÇה ז &x וז ÚהזÇה
    p = &x;

    // ÎØÃ: &x ÚהזÇה¡ ב‗ה *p וז ÞםדÉ
    // *p = &x;

    // ÕÍםÍ: *p ום ÞםדÉ¡ ז x ÞםדÉ
    *p = x;

    return 0;
}
