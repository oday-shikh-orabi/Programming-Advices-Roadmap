#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int& x = a;  // ÇáãÑÌÚ x íÔíÑ Åáì a

    cout << &a << endl; // ÚäæÇä a
    cout << &x << endl; // ÚäæÇä x (äİÓ ÚäæÇä a)

    cout << a << endl;  // ŞíãÉ a
    cout << x << endl;  // ŞíãÉ x (äİÓ ŞíãÉ a)

    int* p = &a;        // ÇáãÄÔÑ p íÔíÑ Åáì a
    cout << p << endl;  // ÚäæÇä a (ÇáãÎÒä İí p)
    cout << *p << endl; // ÇáŞíãÉ ÇáãæÌæÏÉ İí ÇáÚäæÇä (ŞíãÉ a)

    *p = 30;
    cout << p << endl;  // ÚäæÇä a (ÇáãÎÒä İí p)
    cout << *p << endl;

    int b = 20;
    p = &b;             // ÇáãÄÔÑ p ÃÕÈÍ íÔíÑ Åáì b
    cout << p << endl;  // ÚäæÇä b
    cout << *p << endl; // ÇáŞíãÉ ÇáãæÌæÏÉ İí b

    return 0;
}
