#include <string>
#include <iostream>
using namespace std;

string TrimLeft(string S1)
{
    for (short i = 0; i < S1.length(); i++)
    {
        if (S1[i] != ' ')
        {
            return S1.substr(i, S1.length() - i);
        }
    }
    return "";
}

string TrimRight(string S1)
{
    for (short i = S1.length() - 1; i >= 0; i--)
    {
        if (S1[i] != ' ')
        {
            return S1.substr(0, i + 1); //åáŞ Çá i åí æÇŞİì ÚäÏ Çæá ÍÑİ ãä Çáíãíä áßä ÏÇáÉ ÇáÓæÈ ÓÊÑíäÛ ãÇ ÈÊŞÑÇåÇ ÇĞÇ ŞáÊ ãä ÇáÕİÑ áÚäÏåÇ 
                                                  // ÈÏß ÊÒíÏ æÇÍÏ áÍÊì ÊŞÑÇ ÇÎÑ ÍÑİ
                                                  //Substr(0,ŞÈá ÇÎÑ ÍÑİ + 1) 
                                                  // ÈíØáÚ ãÚß ÇÎÑ æÇÍÏ
        }
    }
    return "";
}

string Trim(string S1)
{
    return TrimLeft(TrimRight(S1));
}

int main()
{
    string S1;

    cout << "Please enter a string with spaces:\n";
    getline(cin, S1);

    cout << "\nTrimLeft  = [" << TrimLeft(S1) << "]";
    cout << "\nTrimRight = [" << TrimRight(S1) << "]";
    cout << "\nTrim      = [" << Trim(S1) << "]\n";

    system("pause>0");
}
