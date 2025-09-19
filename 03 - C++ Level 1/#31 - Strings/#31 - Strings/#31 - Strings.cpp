#include <iostream>
#include <string>
using namespace std;

int main()
{
	string st1, st2, st3 , sum;
	cout << "Enter your Full Name Pleas : \n";
	getline(cin, st1); // åí ãÇ ÈÊäÒá ÓØÑ

	cout << st1;
	cout << "\nEnter st2 Please: \n";
	cin >> st2;
	cout << "Enter st3 Please: \n";
	cin >> st3;
	sum = st2 + st3;

	cout << "*******************************************"<< endl;
	cout << "The length of string is : " << st1.length() << endl;
	cout << "Chrcteres at 0,2,4,7 are : " << st1[0] << " " << st1[2] << " " << st1[4] << " " << st1[7] << endl;
	cout << "Conctinnng str2 and str3 = " << st2 + st3 << endl;
	cout << st2 << " * " << st3 << " = " << stoi(st2) * stoi(st3) ;
}