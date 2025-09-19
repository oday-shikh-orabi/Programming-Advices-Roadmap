#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

enum enOrder{ SmallLatter = 1, CapitalLatter = 2 , SpecilCharacter = 3, Digit = 4};
int ReadOrder()
{
	int order;
	cout << "Please Enter Number for What Do You want to generation : " << endl;
	cout << "1) SmallLatter" << endl;
	cout << "2) CapitalLatter" << endl;
	cout << "3) SpecilCharacter" << endl;
	cout << "4) Digit" << endl;
	cin >> order;

	return order;
}

int RandomNumber(int From, int To)
{
	int randnum = rand() % (To - From + 1) + From;

	return randnum;
}
int main()
{
	srand((unsigned)time(NULL));

	int order = ReadOrder();
	cout << "\n";
	if (order == enOrder::SmallLatter)
		cout << char(RandomNumber(97, 122));
	if (order == enOrder::CapitalLatter)
		cout << char(RandomNumber(65, 90));
	if (order == enOrder::SpecilCharacter)
		cout << char(RandomNumber(33, 47));
	if (order == enOrder::Digit)
		cout << char(RandomNumber(48, 57));
}
