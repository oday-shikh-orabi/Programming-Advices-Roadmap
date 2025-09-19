#include <iostream>
using namespace std;

string ReadPinNumber(string Message)
{
	string PinNumber;
	cout << Message << endl;
	cin >> PinNumber;

	return PinNumber;
}
bool Login()
{
	string PinNumber;
	int Counter = 3;
	do
	{
		PinNumber = ReadPinNumber("Please Enter Pin Number : ");
		Counter--;
		if (PinNumber == "1234")
		{
			return 1;
		}
		else
		{
			system("color 4f");
			cout << "\nWrong Number You Have " << Counter << " more tries ." << endl;

		}
	} while (PinNumber != "1234" && Counter >= 1);
	return 0;
}
int main()
{
	if (Login())
	{
		system("color 2f");
		cout << "\nYour Balnce is : " << 7333 << endl;
	}
	else
	{
		cout << "Your Card blocked call the bank for help " << endl;
	}

	return 0;
}
