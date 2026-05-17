#include <iostream>
using namespace std;

class clsPerson
{

private:

    string _FirstName;
    string _LastName;


   

    

public:


    void SetFirstName(string FirstName) {

        _FirstName = FirstName;

    }

    string GetFirstName() {

        return _FirstName;


    }

    void SetLastName(string LastName) {

        _LastName = LastName;

    }

    string GetLastName() {

        return _LastName;

    }

    __declspec(property(get = GetFirstName, put = SetFirstName)) string FirstName;

    __declspec(property(get = GetLastName, put = SetLastName)) string LastName;

    __declspec(property(get =, put = )) string a;


};

int main()

{

    clsPerson Person1;

    Person1.SetFirstName("Mohammed");
    cout << Person1.GetFirstName() << endl;

    //instead of the above we only write this
    Person1.FirstName = "Mohammed";
    cout << Person1.FirstName;



    Person1.LastName = "M";
    cout << Person1.LastName;

    system("pause>0");
    return 0;
};

