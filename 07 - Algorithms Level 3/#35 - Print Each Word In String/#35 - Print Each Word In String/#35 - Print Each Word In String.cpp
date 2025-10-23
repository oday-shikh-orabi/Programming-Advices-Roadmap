#include <string>
#include <iostream>
using namespace std;

string ReadString()
{
    string S1;
    cout << "\nPlease Enter Your String?\n";
    getline(cin, S1);
    return S1;
}


void PrintVowels(string S1)
{
    cout << "\nVowels in string are: ";

    for (short i = 0; i < S1.length(); i++)
    {
        if (S1[i] != ' ')
        {
            cout << S1[i];
        }
        else
        {
            cout << endl;
        }
        ///////////////// ÊÎíá æÇÍÏ íÍØ ßÐÇ ãÓÇÝÉ ÈÇí ÈÇí ÈÊÍØáí ÚÔÑ ÓØæÑ

    }
}


int main()
{
    string S1 = ReadString();

    PrintVowels(S1);

    system("pause>0");
}
