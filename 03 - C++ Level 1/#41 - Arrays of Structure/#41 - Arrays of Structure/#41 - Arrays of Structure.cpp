/*#include <iostream>
using namespace std;

struct stPersonInfo
{
    string FirstName;
    string LastName;
    unsigned short Age;
    string Phone;

};
void fnRead(stPersonInfo &PersonInfo)
{
    
    cout << "Enter Your First Name : ";
    cin >> PersonInfo.FirstName;
    cout << "Enter Your Last Name : ";
    cin >> PersonInfo.LastName;
    cout << "Enter Your Age : ";
    cin >> PersonInfo.Age;
    cout << "Enter Your Phone : ";
    cin >> PersonInfo.Phone;

}
void fnPrint(stPersonInfo &PersonInfo)
{
    cout << "\n********************************************\n";
    cout << "First Name : " << PersonInfo.FirstName << endl;
    cout << "Last Name : " << PersonInfo.LastName << endl;
    cout << "Age : " << PersonInfo.Age << endl;
    cout << "Phone : " << PersonInfo.Phone << endl;
    cout << "********************************************\n";

}
void fnReadPerson(stPersonInfo arPerson[2])
{

    cout << "Enter Your First Name : ";
    cin >> arPerson[1].FirstName;
    cout << "Enter Your Last Name : ";
    cin >> arPerson[1].LastName;
    cout << "Enter Your Age : ";
    cin >> arPerson[1].Age;
    cout << "Enter Your Phone : ";
    cin >> arPerson[1].Phone;

}
void fnPrintPerson(stPersonInfo arPerson[2])
{
    cout << "\n********************************************\n";
    cout << "First Name : " << arPerson[1].FirstName << endl;
    cout << "Last Name : " << arPerson[1].LastName << endl;
    cout << "Age : " << arPerson[1].Age << endl;
    cout << "Phone : " << arPerson[1].Phone << endl;
    cout << "********************************************\n";

}
int main()
{
    stPersonInfo PersonInfo;
    fnRead(PersonInfo);
    fnPrint(PersonInfo);
    stPersonInfo arPerson[2];
    fnReadPerson(arPerson);
    fnPrintPerson(arPerson);


}*/
#include <iostream>
using namespace std;

struct stPersonInfo
{
    string FirstName;
    string LastName;
    unsigned short Age;
    string Phone;

};
void fnRead(stPersonInfo& PersonInfo)
{

    cout << "Enter Your First Name : ";
    cin >> PersonInfo.FirstName;
    cout << "Enter Your Last Name : ";
    cin >> PersonInfo.LastName;
    cout << "Enter Your Age : ";
    cin >> PersonInfo.Age;
    cout << "Enter Your Phone : ";
    cin >> PersonInfo.Phone;

}
void fnPrint(stPersonInfo& PersonInfo)
{
    cout << "\n********************************************\n";
    cout << "First Name : " << PersonInfo.FirstName << endl;
    cout << "Last Name : " << PersonInfo.LastName << endl;
    cout << "Age : " << PersonInfo.Age << endl;
    cout << "Phone : " << PersonInfo.Phone << endl;
    cout << "********************************************\n";

}
void fnReadPerson(stPersonInfo arPerson[2])
{

    cout << "Enter Your First Name : ";
    cin >> arPerson[1].FirstName;
    cout << "Enter Your Last Name : ";
    cin >> arPerson[1].LastName;
    cout << "Enter Your Age : ";
    cin >> arPerson[1].Age;
    cout << "Enter Your Phone : ";
    cin >> arPerson[1].Phone;

}
void fnPrintPerson(stPersonInfo arPerson[2])
{
    cout << "\n********************************************\n";
    cout << "First Name : " << arPerson[1].FirstName << endl;
    cout << "Last Name : " << arPerson[1].LastName << endl;
    cout << "Age : " << arPerson[1].Age << endl;
    cout << "Phone : " << arPerson[1].Phone << endl;
    cout << "********************************************\n";

}
int main()
{
    stPersonInfo PersonInfo;
    fnRead(PersonInfo);
    fnPrint(PersonInfo);
    stPersonInfo arPerson[2];
    fnReadPerson(arPerson);
    fnPrintPerson(arPerson);


}