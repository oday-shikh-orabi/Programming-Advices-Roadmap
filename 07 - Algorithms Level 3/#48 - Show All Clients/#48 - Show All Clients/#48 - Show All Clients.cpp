#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <format>
#include <iomanip> 

using namespace std;

string Tap(int Number)
{
    string T = "";

    for (int i = 1; i <= Number; i++)
    {
        T = T + "\t";
    }

    return T;
}

struct sClient
{
    string AccountNumber;
    string PinCode;
    string Name;
    string Phone;
    double AccountBalance;
};

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

        S1.erase(0, pos + Delim.length());
    }

    if (S1 != "")
    {
        vString.push_back(S1); // it adds last word of the string
    }

    return vString;
}

sClient ConvertLinetoRecord(string Line, string Seperator = "#//#")
{
    sClient Client;
    vector<string> vClientData;

    vClientData = SplitString(Line, Seperator);

    Client.AccountNumber = vClientData[0];
    Client.PinCode = vClientData[1];
    Client.Name = vClientData[2];
    Client.Phone = vClientData[3];
    Client.AccountBalance = stod(vClientData[4]); // cast string to double

    return Client;
}

vector<sClient> ShowClients()
{
    vector<sClient> vClients;

    fstream MyFile;

    // › Õ «·„·› »Ê÷⁄ «·ﬁ—«¡…
    MyFile.open("Clients.txt", ios::in);

    if (MyFile.is_open())
    {
        string Line;

        while (getline(MyFile, Line))
        {
            vClients.push_back(ConvertLinetoRecord(Line));
        }

        MyFile.close();
    }


    return vClients;
}

void PrintClientRecord(vector<sClient> vClients)
{
    printf("%sClient List (%d) Clients.\n", Tap(5).c_str(), vClients.size());
    cout << "----------------------------------------------------------------------------------------" << endl;
    cout << "| Account Number " << "| Pin Code " << "| Client Name                      " << "| Phone Number " << "| Balnae " << endl;
    cout << "----------------------------------------------------------------------------------------" << endl;

    for (int i = 0; i < vClients.size(); i++)
    {
        
        cout << "|" << setw(16)  << left << vClients[i].AccountNumber ;
        cout << "|" << setw(10)  << left << vClients[i].PinCode ;
        cout << "| "<< setw(33) << left << vClients[i].Name ;
        cout << "|" << setw(14) << left << vClients[i].Phone << setw(5);
        cout << "|" << setw(10) << left << vClients[i].AccountBalance ;
        cout << endl;
    }

    
}

int main()
{
    vector<sClient> vClients;

    vClients = ShowClients();

    PrintClientRecord(vClients);

    system("pause>0");
    return 0;
}
