#include <iostream>
using namespace std;


int MyFloor(float Number)
{
    
        if (Number > 0)
            return int(Number);
        else
            return int(--Number);
    
}

float ReadNumber()
{
    float Number;
    cout << "Please enter a float number? ";
    cin >> Number;
    return Number;
}

int main()
{
    float Number = ReadNumber();
    cout << "My Floor Result : " << MyFloor(Number) << endl;
    cout << "C++ Floor Result: " << floor(Number) << endl;
    return 0;
}
