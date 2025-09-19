#include <vector>
#include <iostream>
using namespace std;

int ReadPlayAgin()
{
    char PlayAginY_N;
    do
    {
        cout << "\n" << "Do You Want To Play again ? Y / N ? ";
        cin >> PlayAginY_N;
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // „”Õ »«ﬁÌ «·≈œŒ«·  „À· aa 
    } while (PlayAginY_N != 'Y' && PlayAginY_N != 'y' && PlayAginY_N != 'N' && PlayAginY_N != 'n');

    return PlayAginY_N;
}

struct stEmployees
{
    string FirstName;
    string LastName;
    string Salary;
};

void ReadNumber(vector<stEmployees>& vEmployees)
{
    char PlayAginY_N = 'Y';
    stEmployees stTempEmployees;


    while (PlayAginY_N == 'Y' || PlayAginY_N == 'y')
    {
        cout << "Please Enter a First Name : " ;
        cin >> stTempEmployees.FirstName;
        cout << "Please Enter a Last Name : " ;
        cin >> stTempEmployees.LastName;
        cout << "Please Enter a Salary : " ;
        cin >> stTempEmployees.Salary;

        vEmployees.push_back(stTempEmployees);


        PlayAginY_N = ReadPlayAgin();
        
        cout << endl;
    }

}
void PrintResutl(vector<stEmployees>& vEmployees)
{
    // ranged loop
    cout << "Employees Vector :\n" << endl;
    for (stEmployees& stTempEmployees: vEmployees) //„‘«‰ „« «‰”Œ «·” —«ﬂ‘— Ì·Ì »ﬂ· Œ«‰… „‰ «·›Ìﬂ Ê— Œ·’ »ÕÿÂ« »«Ì —Ì› ·· Ì„» Ê» ⁄«„· „⁄
                                                  // «·” —«ﬂ‘— Ì·Ì »· Œ«‰… „»«‘—
    {
        cout << "First Name : " << stTempEmployees.FirstName << endl;
        cout << "Last Name  : " << stTempEmployees.LastName << endl;
        cout << "Salary     : " << stTempEmployees.Salary << endl;

        cout << endl;
    }
    

}


int main()
{
    vector<stEmployees> vEmployees;

    ReadNumber(vEmployees);
    PrintResutl(vEmployees);

    return 0;
}
