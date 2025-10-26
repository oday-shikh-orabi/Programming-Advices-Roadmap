#include <iostream>
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

int main()
{
	vector<string> vString = { "Ahmad","Mahmoud","Hasan","Oday" };

	JoinString(vString,",");
}
