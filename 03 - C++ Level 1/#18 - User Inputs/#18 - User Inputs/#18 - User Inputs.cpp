#include <iostream>
using namespace std;

int main()
{
    
    string name ;
    unsigned short age;
    string city ;
    string contry ;
    float Monthlysalary;
    unsigned char gender ;
    bool maired;

    cout << "Enter Your Name : " << endl;
    cin >> name;
    cout << "Enter Your Age : " << endl;
    cin >> age ;
    cout << "Enter Your City : " << endl;
    cin >> city ;
    cout << "Enter Your Contry : " << endl;
    cin >> contry ;
    cout << "Enter Your Monthly Salary : " << endl;
    cin >> Monthlysalary;
    cout << "Enter Your Gender : " << endl;
    cin >> gender;
    cout << "Enter If you are Maired 1 Or 0  : " << endl;
    cin >> maired;
    cout << "\n";

    cout << "******************************************\n";
    cout << "Name : " << name << endl;
    cout << "Age : " << age << "\n";
    cout << "City : " << city << endl ;
    cout << "Contry : " << contry << endl;
    cout << "Monthly salary : " << Monthlysalary << endl;
    cout << "Yearly salary : " << Monthlysalary * 12 << "\n"; // ãÇ ÚÑÝÊ ãÊÍæá áÇä ãÇ ÑÍ ÇÓÊÎÏãåÇ ãÑÉ ËÇäíÉ æãÔÇä äÞæí ÇáÇÏÇÁ æãÇ äÓÊÎÏã ÐÇßÑÉ Úá ÝÇÖí
    cout << "Gender : " << gender << "\n";
    cout << "Is Maired : " << maired << "\n";
    cout << "******************************************" << endl;

    return 0;
}
