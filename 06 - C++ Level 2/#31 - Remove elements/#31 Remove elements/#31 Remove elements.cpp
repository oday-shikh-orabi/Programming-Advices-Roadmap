#include <vector>
#include <iostream>
using namespace std;

int main() {
    vector<int> vNumbers;

    vNumbers.push_back(10);
    vNumbers.push_back(20);
    vNumbers.push_back(30);
    vNumbers.push_back(40);
    vNumbers.push_back(50);

    //Remove Elemnts Ways
 
    // 1
    /*
    vNumbers.pop_back();
    vNumbers.pop_back();
    vNumbers.pop_back();
    vNumbers.pop_back();
    vNumbers.pop_back();
    */

    // 2
    //vNumbers.clear();

    // 3
   /* if (!vNumbers.empty())
        vNumbers.pop_back();
        */
    // 4 
    /*int VectorLength = vNumbers.size(); // ÖÑæÑí ÊÍØ ÇáÍÌã ÈãÊÍæá áÇä ÇĞÇ ãÇ ÈÊÍØå ÈíÕíÑ ãÚß ÇíÑæÑ ãäØŞí
    for(int i = 0; i < VectorLength; i++)
        vNumbers.pop_back();
        */

    cout << "Numbers Vector:\n\n";

    // ranged loop
    for (int& Number : vNumbers) {
        cout << Number << endl;
    }

    cout << endl;
    return 0;
}
