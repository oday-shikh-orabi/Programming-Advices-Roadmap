#include <iostream>
#include <string>
using namespace std;

struct stContact
{
    string phoneNumber;
    string emil;
    string facebookLink;
};

struct stPrivecyInfo
{
    char Gender = 'M';
    bool Ismired;
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

struct stInfo 
{
    string Name;
    unsigned short Age;
    stSalary Salary;
    stPrivecyInfo Privecy;
    stAdress Adress;
    stContact Contact;
};

void fnReadinfo(stInfo &info)
{
    cout << "Enter Your Name : " << endl;
    getline(cin, info.Name); //ÈÚÏ ãÇ ãÑÑÊ ÇáÓÊÑÇßÔÑ ÈÞáÈ ÇáÝÇäßÔä ÈÊÕíÑ ÇáÇäÝæ ßÇäåÇ ÈíÑÓæä ÇäÝæ
    cout << "Enter Your Age : " << endl;
    cin >> info.Age;
    cout << "Enter Your City : " << endl;
    cin.ignore(1,'\n');
    getline(cin, info.Adress.city);
    cout << "Enter Your Phone Number : " << endl;
    cin >> info.Contact.phoneNumber;
    cout << "Enter Your Phone PostCard : " << endl;
    cin.ignore(1, '\n');
    getline(cin, info.Adress.postcard);
    cout << "Enter Your Contry : " << endl;
    getline(cin, info.Adress.contry);
    cout << "Enter Your Monthly Salary : " << endl;
    cin >> info.Salary.MonthlySalary;
    cout << "Enter Your Gender : " << endl;
    cin >> info.Privecy.Gender;
    cout << "Enter If you are Maired 1 Or 0  : " << endl;
    cin >> info.Privecy.Ismired;
    cout << "Emil : " << endl;
    cin >> info.Contact.emil;
    cout << "Facebook Link : " << endl;
    cin >> info.Contact.facebookLink;
}
void fnWriteInfo(stInfo info)
{
    cout << "\n";

    cout << "******************************************\n";
    cout << "Name : " << info.Name << endl;
    cout << "Age : " << info.Age << "\n";
    cout << "City : " << info.Adress.city << endl;
    cout << "Contry : " << info.Adress.contry << endl;
    cout << "Phone Number : " << info.Contact.phoneNumber << endl;
    cout << "Post Card : " << info.Adress.postcard << endl;
    cout << "Monthly salary : " << info.Salary.MonthlySalary << endl;
    cout << "Yearly salary : " << info.Salary.MonthlySalary * 12 << "\n"; // ãÇ ÚÑÝÊ ãÊÍæá áÇä ãÇ ÑÍ ÇÓÊÎÏãåÇ ãÑÉ ËÇäíÉ æãÔÇä äÞæí ÇáÇÏÇÁ æãÇ äÓÊÎÏã ÐÇßÑÉ Úá ÝÇÖí
    cout << "Gender : " << info.Privecy.Gender << "\n";
    cout << "Is Maired : " << info.Privecy.Ismired << "\n";
    cout << "Emil : " << info.Contact.emil << endl;
    cout << "FaceBook Link : " << info.Contact.facebookLink << endl;
    cout << "******************************************" << endl;
}

int main()
{
    stInfo Personinfo;
    fnReadinfo(Personinfo);
    fnWriteInfo(Personinfo);
    

    return 0;
}

