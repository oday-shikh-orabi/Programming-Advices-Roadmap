#include <string>
#include <iostream>
#include <vector>
using namespace std;

string ReadString()
{
    string S1;
    cout << "Please Enter Your String?\n";
    getline(cin, S1);
    return S1;
}

vector<string> SplitString(string S1, string Delim)
{
    vector<string> vString;
    short pos = 0;
    string sWord; // define a string variable

    // use find() function to get the position of the delimiters
    while ((pos = S1.find(Delim)) != std::string::npos)
    {
        sWord = S1.substr(0, pos); // store the word

        if (sWord != "")
        {
            vString.push_back(sWord);
        }

        // erase() until position and move to next word
        S1.erase(0, pos + Delim.length());
    }

    if (S1 != "")
    {
        vString.push_back(S1); // add the last word of the string
    }

    return vString;
}

int main()
{
    vector<string> vString;
    vString = SplitString(ReadString(), " ");

    cout << "\nTokens = " << vString.size() << endl;

    //Range-based for loop
    for (string& s : vString)
    {
        cout << s << endl;
    }

    system("pause>0");
}
