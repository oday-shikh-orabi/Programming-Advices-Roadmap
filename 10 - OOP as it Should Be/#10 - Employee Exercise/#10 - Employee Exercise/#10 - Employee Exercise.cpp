#include <iostream>
using namespace std;

class clsEmployee
{

private:
    int _ID;
    string _FirstName;
    string _LastName;
    string _Title;
    string _Email;
    string _Phone;
    string _Salary;
    string _Department;

public:
    clsEmployee(int ID, string FirstName, string LastName, string Title, string Email, string Phone, string Salary, string Department)
    {
        _ID = ID;
        _FirstName = FirstName;
        _LastName = LastName;
        _Title = Title;
        _Email = Email;
        _Phone = Phone;
        _Salary = Salary;
        _Department = Department;

    }

    //Get / Read Only Property
    int ID()
    {
        return _ID;
    }


    //set fun
    void setFirstName(string FirstName)
    {
        _FirstName = FirstName;
    }

    //Get
    string FirstName()
    {
        return _FirstName;
    }

    //set fun
    void setLastName(string LastName)
    {
        _LastName = LastName;
    }

    //Get
    string LastName()
    {
        return _LastName;
    }

    //set fun
    void setTitle(string Title)
    {
        _Title = Title;
    }

    //Get
    string Title()
    {
        return _Title;
    }


    //set fun
    void setEmail(string Email)
    {
        _Email = Email;
    }

    //Get
    string Email()
    {
        return _Email;
    }

    //set fun
    void setPhone(string Phone)
    {
        _Phone = Phone;
    }

    //Get
    string Phone()
    {
        return _Phone;
    }

    //set fun
    void setSalary(string Salary)
    {
        _Salary = Salary;
    }

    //Get
    string Salary()
    {
        return _Salary;
    }

    //set fun
    void setDepartment(string Department)
    {
        _Department = Department;
    }

    //Get
    string Department()
    {
        return _Department;
    }


    string FullName()
    {
        return FirstName() + " " + LastName();
    }

    void Print()
    {
        cout << "info : " << endl;
        cout << "-----------------" << endl;
        cout << "ID         : " << _ID << endl;
        cout << "First Name : " << _FirstName << endl;
        cout << "Last Name  : " << _LastName << endl;
        cout << "Full Name  : " << FullName() << endl;
        cout << "Title      : " << _Title << endl;
        cout << "Email      : " << _Email << endl;
        cout << "Phone      : " << _Phone << endl;
        cout << "Salary     : " << _Salary << endl;
        cout << "Department : " << _Department << endl;
        cout << "-----------------" << endl;

    }

    void SendEmail(string Subject, string Body)
    {
        cout << "\nThe Following message sent seccessfully to Email: " << _Email << endl;
        cout << "Subject : " << Subject << endl;
        cout << "Body : " << Body << endl;

    }

    void SendSMS(string Message)
    {
        cout << "\nThe Following SMS Sent Successfully to phone: " << _Phone << endl;
        cout << Message << endl;
    }

};

int main()
{
    clsEmployee Person1(10, "Oday", "Orabi","Back End", "oday.dev@gmail.com", "098765432" , "5000" , "B1");

    Person1.Print();


    Person1.SendEmail("Hi", "How are you?");
    Person1.SendSMS("How are you?");

    return 0;
}
