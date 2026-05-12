#include <iostream>
using namespace std;


class clsPerson
{

	int x;

public:
	string FirstName;
	string LastName;

	string FullName()
	{
		return FirstName + " " + LastName + "\n";
	}


};

int main()
{

	clsPerson Person1;

	Person1.FirstName = "Oday";
	Person1.LastName = "Orabi";

	cout << Person1.FullName();

	

	return 0;
}
