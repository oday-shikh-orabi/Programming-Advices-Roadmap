#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> num{ 1, 2, 3, 4, 5 };

    // declare iterator «·„ﬂ——
    vector<int>::iterator iter;

    // use iterator with for loop 
    for (iter = num.begin(); iter != num.end(); iter++) {
        cout << *iter << "  ";
    }
    // ‘€·Â »⁄œ Â«·ﬂ·Ì‘… ﬂ«‰Ê „ €Ì—
    return 0;
}
