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

void fnPrintFullName(stPersonInfo Info)
{
	cout << "\a\nYour full Name Is : " << Info.Name << " " << Info.LastName; //ßá ÇÔí ÈÝÇäßÔä ßá ÚãáíÉ ÈÝÇäßÔä
}

int main()
{
	fnPrintFullName(fnReadInfo());
}
