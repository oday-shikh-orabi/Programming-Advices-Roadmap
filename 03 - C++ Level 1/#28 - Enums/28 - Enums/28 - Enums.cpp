#include <iostream>
using namespace std;

///////////////////////////////////////enum is Hared coded///////////////////////////////////
enum enFamily { one, Tow, Three, Else };
enum enGender { Male, Famle };
enum enMiredStutes { Mired, Single }; // ãÔÇä íØáÚæ ãäÙãíä ÈÚÑİåã áÍÇáåã ãÔÇä íØáÚæ ßáåã
struct stContact
{
    string phoneNumber;
    string emil;
    string facebookLink;
};


struct stPrivecyInfo
{
    enFamily Family;
    enGender Gender;
    enMiredStutes MiredStutes;
};


struct stAdress
{
    string city;
    string contry;
    string postcard;
};

struct stSalary
{
    unsigned int MonthlySalary;

};

struct stPersonInfo
{
    string Name;
    unsigned short Age;
    stSalary Salary;
    stPrivecyInfo Privecy;
    stAdress Adress;
    stContact Contact;
};

int main()
{
    stPersonInfo Personinfo;
    stAdress Adress;
    
    Personinfo.Privecy.MiredStutes = enMiredStutes::Mired;
    Personinfo.Name = "Oday";

    cout << "\n";

    cout << "******************************************\n";
    cout << "Name : " << Personinfo.Name << endl;
    cout << "Age : " << Personinfo.Age << "\n";
    cout << "City : " << Personinfo.Adress.city << endl;
    cout << "Contry : " << Personinfo.Adress.contry << endl;
    cout << "Phone Number : " << Personinfo.Contact.phoneNumber << endl;
    cout << "Post Card : " << Adress.postcard << endl;
    cout << "Monthly salary : " << Personinfo.Salary.MonthlySalary << endl;
    cout << "Yearly salary : " << Personinfo.Salary.MonthlySalary * 12 << "\n"; // ãÇ ÚÑİÊ ãÊÍæá áÇä ãÇ ÑÍ ÇÓÊÎÏãåÇ ãÑÉ ËÇäíÉ æãÔÇä äŞæí ÇáÇÏÇÁ æãÇ äÓÊÎÏã ĞÇßÑÉ Úá İÇÖí
    cout << "Gender : " << "Male" << "\n";
    cout << "Is Maired : " << Personinfo.Privecy.MiredStutes << "\n";
    cout << "Emil : " << Personinfo.Contact.emil << endl;
    cout << "FaceBook Link : " << Personinfo.Contact.facebookLink << endl;
    cout << "******************************************" << endl;

    return 0;



}

