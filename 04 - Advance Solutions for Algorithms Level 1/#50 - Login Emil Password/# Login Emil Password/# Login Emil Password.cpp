#include <iostream>
using namespace std;

string ReadEmil()
{
    string Emil;
    cout << "Please Enter Your Emil : " << endl;
    cin >> Emil;

    return Emil;
}
string ReadPincode()
{
    string Pincode;
    cout << "Please Enter Your Password : " << endl;
    cin >> Pincode;

    return Pincode;
}
bool Login()
{
    string Emil;
    string Pincode;
    do
    {
        Emil = ReadEmil();
        Pincode = ReadPincode();
        if (Emil == "Ahmad99" && Pincode == "12345")
        {
            return 1;
        }
        else
        {
            cout << "\nYour Email or Password is wrong," << endl;
            system("color 4f");
        }

    } while (Emil != "Ahmad99" || Pincode != "12345"); //
}
int main()
{
    if (Login())
    {
        cout << "\nWelcom back" << endl;
        system("color 2f");
    }
}
