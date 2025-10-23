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

vector<string> SpiltString(string S1, string delim = " ")
{
 
    vector<string> SpiltString;

    short pos = 0;
    string sWord; // define a string variable

    // use find() function to get the position of the delimiters
    while ((pos = S1.find(delim)) != std::string::npos)
    {
        sWord = S1.substr(0, pos); // store the word

        if (sWord != "")
        {
            SpiltString.push_back(sWord);
        }

        // erase() until position and move to next word
        S1.erase(0, pos + delim.length());
    }

    if (S1 != "")
    {
        SpiltString.push_back(S1);
    }

    return SpiltString;
}

void print(vector<string> spiltString)
{
    cout << "Tokens = " << spiltString.size() << endl;

    
    for (int i = 0; i < spiltString.size(); i++)
    {
        cout << spiltString[i] << endl;
    }
}

int main()
{

    string S1 = ReadString();

    
    print(SpiltString(S1, " "));
    system("pause>0");
}
