#include <iostream>
#include <string>
using namespace std;

struct stPersonInfo
{
	string Name;
	string LastName;

};
stPersonInfo fnReadInfo()
{
	stPersonInfo PersonInfo;

	cout << "Enter Your First Name : ";
	getline(cin, PersonInfo.Name);
	cout << "Enter Your Last Name : ";
	getline(cin, PersonInfo.LastName);

	return PersonInfo;
}
string fnGetFullName(stPersonInfo Info , bool Reserved)
{

	string FullName;
	if (Reserved)
		FullName = Info.LastName + " " + Info.Name;
	else
		FullName = Info.Name + " " + Info.LastName;

	return FullName;
}
void fnPrintFullName(string FullName)
{
	cout << "\a\nYour full Name Is : " << FullName << endl;
}

int main()
{
	fnPrintFullName(fnGetFullName(fnReadInfo(),true));

	return 0;
}
