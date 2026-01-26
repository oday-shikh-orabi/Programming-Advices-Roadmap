#include <string>
#include <iostream>
#include <vector>
using namespace std;

struct stDate
{
    short Year;
    short Month;
    short Day;
};

string ReadDate(string Massage)
{
    string S1;
    cout << Massage;
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

stDate StringtoDate(string DateString)
{
    vector<string> vDate;
    vDate = SplitString(DateString, "/");


    stDate Date;

    Date.Day   = stoi(vDate[0]);
    Date.Month = stoi(vDate[1]);
    Date.Year  = stoi(vDate[2]);

    return Date;
}

string DateToString(stDate Date)
{
    return to_string(Date.Day) + "/" + to_string(Date.Month) + "/" + to_string(Date.Year);
}

int main()
{
    string DateString;
    DateString = ReadDate("Please Enter Date dd/mm/yyyy? ");
    
    stDate Date;
    Date = StringtoDate(DateString);

    cout << "\nDay: " << Date.Day << endl;
    cout << "Month: " << Date.Month << endl;
    cout << "Year: " << Date.Year << endl;

    cout << "You Entered: " << DateToString(Date);


    system("pause>0");
}