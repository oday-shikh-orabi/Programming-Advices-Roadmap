#include <iostream>
#include <string>
#include <vector>

using namespace std;

void JoinString(vector<string> vString, string delmi)
{
	for (int i = 0; i < vString.size(); i++)
	{
		if (i < vString.size() - 1)
		{
			cout << vString[i] << delmi;
		}
		else
			cout << vString[i] << endl;
	}
}

void JoinString(string arrString[], short lenght, string delmi)
{
	for (short i = 0; i < lenght ; i++)
	{
		if (i < lenght - 1)
		{
			cout << arrString[i] << delmi;
		}
		else
		{
			cout << arrString[i] << endl;
		}
	}
}

int main()
{
	vector<string> vString = { "Ahmad","Mahmoud","Hasan","Oday" };

	string arrSt[] = { "Ahmad","Mahmoud","Hasan","Oday" };

	JoinString(vString, ",");
	JoinString(arrSt,4, ",");

}
