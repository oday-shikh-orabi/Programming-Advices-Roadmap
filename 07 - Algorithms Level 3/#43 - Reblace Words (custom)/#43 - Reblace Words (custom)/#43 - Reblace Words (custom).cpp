#include <string>
#include <iostream>
#include <vector>
using namespace std;


enum enLetterCase { MatchCase = 1, dontMathCase = 2 };

char InvertLetterCase(char char1)
{
    return isupper(char1) ? tolower(char1) : toupper(char1);
}


string ReblaceCustome(string S1,string StringToReplace, string ReplaceTo , enLetterCase LetterCase = MatchCase)
{

    short pos;

    
    if (LetterCase == dontMathCase)
    {
        StringToReplace[0] = toupper(StringToReplace[0]); //  ﬂ»Ì— √Ê· Õ—›
    }

    pos = S1.find(StringToReplace);

    while (pos != std::string::npos)
    {
        S1.erase(pos, StringToReplace.length());

        S1.insert(pos, ReplaceTo);

        pos = S1.find(StringToReplace); // find next

    }

    return S1;
}


int main()
{
    string S1 = "Welcome to Jordan , Jordan is a nice country";
    string StringToReplace = "Jordan";
    string ReplaceTo = "USA";

    cout << "\nOriginal String\n" << S1;
    cout << "\n\nReplace With Match Case:\n";
    cout << ReblaceCustome(S1, StringToReplace, ReplaceTo,MatchCase);
    cout << "\n\nReplace With Dont Match Case:\n";
    cout << ReblaceCustome(S1, StringToReplace, ReplaceTo,dontMathCase);

    system("pause>0");
}
