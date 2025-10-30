#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

struct sClient
{
    string AccountNumber;
    string PinCode;
    string Name;
    string Phone;
    double AccountBalance;
};

sClient ReadNewClient()
{
    sClient Client;

    cout << "Enter Account Number? ";
    getline(cin, Client.AccountNumber);

    cout << "Enter PinCode? ";
    getline(cin, Client.PinCode);

    cout << "Enter Name? ";
    getline(cin, Client.Name);

    cout << "Enter Phone? ";
    getline(cin, Client.Phone);

    cout << "Enter AccountBalance? ";
    cin >> Client.AccountBalance;

    return Client;
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

void AddClientToFile(sClient Client)
{
    string Line;

    Line = ConvertRecordToLine(Client);

    fstream MyFile;

    MyFile.open("ClientsData.txt", ios::out | ios::app); //append Mode

    if (MyFile.is_open()) {
        MyFile << Line << endl;


        MyFile.close();
    }

}

sClient AddClient()
{
        sClient Client;

        cout << "\nAdding New Client : \n\n";
        Client = ReadNewClient();


        return Client;
}

vector<sClient> AddMoreClients()
{
    vector<sClient> vClients;

    char NewClintY_N;
    do
    {
        system("cls");

        sClient Client = AddClient();

        vClients.push_back(Client);

        AddClientToFile(Client);

        do
        {
            cout << "\nClient Added Successfully, Do You Want To Add More Clients ? Y / N ? ";
            cin >> NewClintY_N;

            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } while (toupper(NewClintY_N) != 'Y' && toupper(NewClintY_N) != 'N');

    } while (toupper(NewClintY_N) == 'Y');

    

    return vClients;
}

int main()
{
    // ‰Õ–› „Õ ÊÏ «·„·› «·ﬁœÌ„
    fstream MyFile("ClientsData.txt", ios::out);
    MyFile.close();

    vector<sClient> vClients = AddMoreClients();


    system("pause");
    return 0;
}
