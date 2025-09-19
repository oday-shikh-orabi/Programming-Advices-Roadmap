#include <iostream>
using namespace std;

enum enResult { Hired, Rejected };
struct stInfo
{
	unsigned int Age;
	bool hasDriverLicense;
	bool hasconnections;
};
stInfo fnReadInfo()
{
	stInfo Info;
	cout << "Plz Enter Your Age : " << endl;
	cin >> Info.Age;
	cout << "Plz Enter \"1\" if You have DriverLicense Or \"0\" : " << endl;
	cin >> Info.hasDriverLicense;
	cout << "Do You Have connections : " << endl;
	cin >> Info.hasconnections;

	return Info;
}
bool IsAccebted(stInfo Info)
{
	if (Info.hasconnections)
	{
		return true;
	}
	else
	{
		return (Info.Age > 21 && Info.hasDriverLicense == true);
	}
}
void PrintResult(stInfo Info)
{

	if (IsAccebted(Info))// ÇáÇßÓÈÊíÏ ÑÍ ÊÓÊÏÚíå åæä İãÇİí ÏÇÚí İãÇ ÏÇÚí ÊÚÑİ ÈÇÑãíÊÑ ãä äæÚæ ãÔÇä ÊãÑÑæ æÊÓÊÎÏãæ ÈÇáãíä
	{                    // İÈÊÎáíåÇ ãÈÇÔÑÉ ÈÊãÑÑ ÇáŞÑÇÁÉ ÈŞáÈ áØÈÇÚÉ ØÇáãÇ äÍä ãÇ ÑÍ äãÑÑ İÇäßÔä ÇáÈæá
		cout << "Hired";
	}
	else
		cout << "Rejected";
}
int main()
{
	PrintResult(fnReadInfo());
}
