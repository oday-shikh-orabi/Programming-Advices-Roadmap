#include <iostream>
#include <string>
using namespace std;

class clsPerson
{
private:

    int _Key = 100;
    string _FirstName;
    string _LastName;


public:

    //Proberty Get
    int Key()
    {
        return _Key;
    }


    //Proberty set
    void setFirstName(string FirstName)
    {


        _FirstName = FirstName;
    }

    //Proberty Get
    string FirstName()
    {
        return _FirstName;
    }

    //Proberty set
    void setLastName(string LastName)
    {


        _LastName = LastName;
    }

    //Proberty Get
    string LastName()
    {
        return _LastName;
    }


    string FullName()
    {
        return _FirstName + " " + _LastName + to_string(_Key);
    }

};

int main()
{
    clsPerson Person1;



    Person1.setFirstName("Mohammed");
    Person1.setLastName("Abu-Hadhoud");

    cout << "Key : " << Person1.Key() << endl;
    cout << "First Name : " << Person1.FirstName() << endl;
    cout << "Last Name : " << Person1.LastName() << endl;
    cout << "Person1: " << Person1.FullName() << endl;

    return 0;
}

