#include <iostream>
using namespace std;

struct stInfo
{
    string FirstName;
    string LastName;
    unsigned short Age;
    string Phone;
};
void fnReadInfo(stInfo& PersonInfo, int contInput)
{

    cout << contInput << ") " << endl;
    cout << "\nEnter Your First Name : ";
    cin >> PersonInfo.FirstName;
    cout << "\nEnter Your Last Name : ";
    cin >> PersonInfo.LastName;
    cout << "\nEnter Your Age : ";
    cin >> PersonInfo.Age;
    cout << "\nEnter Your Phone : ";
    cin >> PersonInfo.Phone;
    cout << endl;

}
void fnPrintInfo(stInfo PersonInfo)
{
    cout << "\n********************************************\n";
    cout << "First Name : " << PersonInfo.FirstName << endl;
    cout << "Last Name : " << PersonInfo.LastName << endl;
    cout << "Age : " << PersonInfo.Age << endl;
    cout << "Phone : " << PersonInfo.Phone << endl;
    cout << "********************************************\n";
}
void fnReadPersonsInfo(stInfo Persons[] , int NumOfPerson)
{
    int contInput = 0;

    for (int i = 0; i < NumOfPerson; i++)
    {
        contInput++;
        fnReadInfo(Persons[i], contInput);
    }
}
void fnPrintPersonsInfo(stInfo Persons[] , int NumOfPerson)
{
    for (int i = 0; i < NumOfPerson; i++)
    {
        fnPrintInfo(Persons[i]);
    }
}
int main()
{
    int NumOfPerson;
    cout << "Enter How Many Persons : " << endl;
    cin >> NumOfPerson;
    stInfo* Perons = new stInfo[NumOfPerson];
    fnReadPersonsInfo(Perons , NumOfPerson);
    fnPrintPersonsInfo(Perons , NumOfPerson);

    return 0;

}