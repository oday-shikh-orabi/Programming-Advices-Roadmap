#include <iostream>
using namespace std;

int main()
{
    for (int i = 10; i >= 1; i--)
    {
        for (int j = 1; j <= i;j++) // ÚÏÏ ÊßÑÇÑ ÇáØÈÇÚÉ
        {
            cout << j;
        }
        cout << "\n";
        // ÇáÊÝßíÑ ãäÈáÔ ãä ÇáÍáÞÇÊ ÇáÚÇÏíÉ ÈÚÏíä ãäÚÏá ÚáíåÇ
    }

    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= i;j++) 
        {
            cout << j;
        }
        cout << "\n";
        
    }
    for (char i = 65; i <= 70; i++)
    {
        for (char j = 65; j <= i;j++)
        {
            cout << j;
        }
        cout << "\n";
    }

    for (int i = 10; i >= 1; i--)
    {
        for (int j = 1; j <= i;j++) 
        {
            cout << j;
        }
        cout << "\n";
    }

    return 0;
}
