#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <iomanip>
using namespace std;

const string ClientsFileName = "Clients.txt";

struct sClient
{
    string AccountNumber;
    string PinCode;
    string Name;
    string Phone;
    double AccountBalance;
    bool Delet = false;
};

vector<string> SplitString(string S1, string Delim)
{
    vector<string> vString;
    short pos = 0;
    string sWord;

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
        vString.push_back(S1); // add last word of the string
    }

    return vString;
}

string ConvertRecordToLine(sClient Client, string Seperator = "#//#")
{
    string stClientRecord = "";

    stClientRecord += Client.AccountNumber + Seperator;
    stClientRecord += Client.PinCode + Seperator;
    stClientRecord += Client.Name + Seperator;
    stClientRecord += Client.Phone + Seperator;
    stClientRecord += to_string(Client.AccountBalance);

    return stClientRecord;
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

vector<sClient> LoadCleintsDataFromFile(string FileName)
{
    vector<sClient> vClients;
    fstream MyFile;

    MyFile.open("Clients.txt", ios::in); // read mode

    if (MyFile.is_open())
    {
        string Line;
        sClient Client;

        while (getline(MyFile, Line))
        {
            Client = ConvertLinetoRecord(Line);
            vClients.push_back(Client);
        }

        MyFile.close();
    }

    return vClients;
}

void PrintClientCard(sClient Client)
{
    cout << "\nThe following are the client details:\n";
    cout << "\nAccount Number : " << Client.AccountNumber;
    cout << "\nPin Code       : " << Client.PinCode;
    cout << "\nName           : " << Client.Name;
    cout << "\nPhone          : " << Client.Phone;
    cout << "\nAccount Balance: " << Client.AccountBalance;
}

bool FindClientByAccountNumber(string AccountNumber, vector<sClient> vClients, sClient& Client)
{

    for (sClient C : vClients)
    {
        if (C.AccountNumber == AccountNumber)
        {
            Client = C;
            return true;
        }
    }

    return false;
}

string ReadClientAccountNumber()
{
    string AccountNumber = "";

    cout << "\nPlease enter Account Number? ";
    cin >> AccountNumber;

    return AccountNumber;
}

void  MarkToDelete(string AccountNumber, vector<sClient>& vClients)
{

    for (sClient& C : vClients)
    {
        if (C.AccountNumber == AccountNumber)
        {
            C.Delet = true;
        }
    }
}

vector<sClient> DeleteItemFromVector(vector<sClient> vClients)
{
    vector<sClient> vClientsUP;
    for (sClient C : vClients)
    {
        if (C.Delet == false)
        {
            vClientsUP.push_back(C);
        }
    }
    return vClientsUP;
}

void DeleteItemFromFile(vector<sClient> vClientsUP)
{
    fstream MyFile;

    MyFile.open("Clients.txt", ios::out); // write mode

    if (MyFile.is_open()) 
    {
        for (sClient C : vClientsUP)
        {
            MyFile << ConvertRecordToLine(C) << endl;
        }

        MyFile.close(); // åí ÖÑæÑíÉ
    }
}

bool AskUserToDelete()
{
    char Answer;
        do
        {
            cout << "\nDo You Want To Delete This Clients ? Y / N ? ";
            cin >> Answer;

            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } while (toupper(Answer) != 'Y' && toupper(Answer) != 'N');

        if (Answer == 'Y')
        {
            return true;
        }
        else
        {
            return false;
        }
}

bool DeleteClientByAccountNumber(string AccountNumber, vector<sClient>& vClients)
{
    sClient Client;
    char Answer = 'n';
        if (FindClientByAccountNumber(AccountNumber, vClients, Client))
        {
            PrintClientCard(Client);
            if (AskUserToDelete())
            {
                MarkToDelete(AccountNumber, vClients);
                DeleteItemFromFile(DeleteItemFromVector(vClients));
                cout << "\n\nClient Deleted Successfully.";

                // Refresh Clients
                vClients = LoadCleintsDataFromFile(ClientsFileName);
                return true;
            }
        }

        else
        {
            cout << "\nClient with Account Number (" << AccountNumber << ") is Not Found!";
            return false;
        }

        return false;
   
}


int main()
{
    
    vector<sClient> vClients = LoadCleintsDataFromFile(ClientsFileName);
    string AccountNumber = ReadClientAccountNumber();

    DeleteClientByAccountNumber(AccountNumber, vClients);
    system("pause>0");
    return 0;
}
