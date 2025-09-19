#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    char x;
    char w;

    x = toupper('a');
    w = tolower('A');

    cout << "converting a to A: " << x << endl;
    cout << "converting A to a: " << w << endl;

    // Upper case letters (A to Z)
    // returns 0 if not uppercase, non-zero if yes
    cout << "isupper('A'): " << isupper('A') << endl;

    // Lower case letters (a to z)
    cout << "islower('A'): " << islower('A') << endl;

    // Digits (0 to 9)
    cout << "isdigit('A'): " << isdigit('A') << endl;

    // Punctuation characters are !"#$%&'()*+,-./:;<=>?@[\]^_`{|}~
    cout << "ispunct('A'): " << ispunct('A') << endl;

    return 0;
}
