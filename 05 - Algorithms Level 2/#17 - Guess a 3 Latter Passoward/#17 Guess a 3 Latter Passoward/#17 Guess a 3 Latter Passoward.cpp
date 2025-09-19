#include <iostream>
using namespace std;

string ReadPassword(string Message)
{
	string Password;

	cout << Message << endl;
	cin >> Password;

	return Password;
}
bool GuessPassoward(string Password)
{
	cout << "\n";
	string word = "";
	int Trial = 0;
	for (int i = 65; i <= 90; i++)
	{
		for (int j = 65; j <= 90; j++)
		{
			for (int k = 65; k <= 90;k++)
			{
				Trial++;
				word = word + char(i);
				word = word + char(j);
				word = word + char(k);

				cout << "Trial [" << Trial << "] : " << word << endl;
				if (word == Password)
				{
					cout << endl;
					cout << "Passowrd Is : " << Password << endl;
					cout << "Foun After " << Trial << " Trial(s)" << endl;
					return true;
				}

				word = "";
			}

		}
	}
	
}

int main()
{
	GuessPassoward(ReadPassword("Please Enter Password From 3 Latter (All Cabital) :"));
}
