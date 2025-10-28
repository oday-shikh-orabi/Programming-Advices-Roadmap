#include <iostream>
#include <string>

using namespace std;

struct stData 
{
    string AccountNumber;
    string PinCode;
    string Name;
    string Phone;
    int AccountBalance;

};

stData ReadData()
{
    stData Data;
    cout << "Enter Account Number? ";
    cin >> Data.AccountNumber;
    cout << "Enter Pin Code? ";
    cin >> Data.PinCode;
    cout << "Enter Name? ";
    cin >> Data.Name;
    cout << "Enter Phone? ";
    cin >> Data.Phone;
    cout << "Enter Account Balance? ";
    cin >> Data.AccountBalance;


    return Data;
}

void ConvertRecordToLine(stData Data)
{
    string delmi = "#//#";

    cout << Data.AccountNumber << delmi << Data.PinCode << delmi << Data.Name << delmi << Data.Phone << delmi << Data.AccountBalance << endl;

}

int main()
{
    stData Data;
    Data = ReadData();

    cout << "\nClient Record For Saving Is:" << endl;
    ConvertRecordToLine(Data);
}
