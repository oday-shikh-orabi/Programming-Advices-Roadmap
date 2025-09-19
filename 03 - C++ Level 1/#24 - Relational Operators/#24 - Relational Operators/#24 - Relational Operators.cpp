#include <iostream>
using namespace std;

int main()
{
    short A,B;
    cout << "Enter First Number : \n";
    cin >> A;

    cout << "Enter Second Number : \n";
    cin >> B;

    cout << "A = B : " << (A == B) << endl;
    cout << "A != B : " << (A != B) << endl;
    cout << "A < B : " << (A < B) << endl;
    cout << "A > B : " << (A > B) << endl;
    cout << "A <= B : " << (A <= B) << endl;
    cout << "A >=B : " << (A >= B) << endl;

    return 0;
}
