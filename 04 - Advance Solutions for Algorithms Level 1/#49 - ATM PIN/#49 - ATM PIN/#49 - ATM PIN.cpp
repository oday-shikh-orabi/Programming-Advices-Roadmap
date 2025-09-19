#include <iostream>
using namespace std;

float ReadAtmPassword()
{
	float Password;
	int Counter = 0;
	do
	{
		cout << "Please Enter Password : " << endl;
		cin >> Password;
		Counter++;
	} while (Password != 1234 && Counter < 3);


	return Password;
}
string CheckPassword(int Password)
{
	if (Password == 1234)
	{
		return "Your Balnce is : 7333";
	}
	else
	{
		return "Wrong Password";
	}
}
void PrintResult(string Result)
{
	cout << "\n" << Result << endl;
}
int main()
{
	PrintResult(CheckPassword(ReadAtmPassword()));
}
