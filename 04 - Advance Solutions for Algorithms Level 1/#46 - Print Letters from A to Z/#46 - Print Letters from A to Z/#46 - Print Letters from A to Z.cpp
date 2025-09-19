#include <iostream>
using namespace std;

void PrintLatterFromAtoZ()
{
	for (int L = 65; L <= 90; L++)
	{
		cout << char(L) << " "; //int better in counter from char
	}
	cout << endl;
}
int main()
{
	PrintLatterFromAtoZ();

	return 0;
}
