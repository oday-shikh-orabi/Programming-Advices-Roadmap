#include <iostream>
using namespace std;

int main()
{
    int plus = 1;
    for (int i = 1; i <= 10; i++ )
    {
        
        for (int j = plus ; j <= 10;j++) 
        {
            cout << j; 
        }
        plus++;
        cout << "\n";

    }
}
