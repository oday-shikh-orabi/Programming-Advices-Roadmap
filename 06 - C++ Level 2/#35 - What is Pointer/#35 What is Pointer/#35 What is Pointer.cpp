#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int& x = a; // x åæ ãÑÌÚ áÜ a

    cout << &a << endl; // ÚäæÇä ÇáãÊÛíÑ a
    cout << &x << endl; // ÚäæÇä ÇáãÑÌÚ x (äİÓ ÚäæÇä a)

    cout << a << endl;  // ŞíãÉ a
    cout << x << endl;  // ŞíãÉ x (äİÓ ŞíãÉ a)

    x = 20; // ÊÛííÑ ŞíãÉ ÇáãÑÌÚ íÛíÑ a
    cout << a << endl;
    cout << x << endl;

    a = 30; // ÊÛííÑ a íÛíÑ ÇáãÑÌÚ
    cout << a << endl;
    cout << x << endl;

    return 0;
}
