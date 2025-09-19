#include <iostream>
using namespace std;

void callByValue(int x) {
    x++; // Changes only the copy
}

void callByReference(int& y) {
    y++; // Changes the real variable
}

int main() {
    int a = 10, b = 10;

    callByValue(a);
    callByReference(b);

    cout << "x after callByValue = " << a << endl; // Still 10
    cout << "y after callByReference = " << b << endl; // Now 11


    //cout << a << endl; Value of Varible
    //cout << &a << endl; Addres of Varible
    return 0;
}