#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

enum enCharType { SamallLetter = 1, CapitalLetter = 2, SpecialCharacter = 3, Digit = 4 };
int ReadOrder()
{
	int order;
	do
	{
		cout << "Please Enter Number for What Do You want to generation : " << endl;
		cout << "1) SmallLatter" << endl;
		cout << "2) CapitalLatter" << endl;
		cout << "3) SpecilCharacter" << endl;
		cout << "4) Digit" << endl;
		cin >> order;

	} while (order < 1 || order > 4);

	return order;
}
int ReadPositveNumber(string Message)
{
	int Number;
	do
	{
		cout << Message << endl;
		cin >> Number;
	} while (Number < 0);

	return Number;
}
int RandomNumberRange(int From, int To)
{
	int randNum = rand() % (To - From + 1) + From;
	return randNum;
}
char RandomChar(int order)
{
	switch (order)
	{
	case enCharType::SamallLetter: 
		return char(RandomNumberRange(97, 122));
	case enCharType::CapitalLetter:
		return char(RandomNumberRange(65, 90));
	case enCharType::SpecialCharacter:
		return char(RandomNumberRange(33, 47));
	case enCharType::Digit:
		return char(RandomNumberRange(48, 57));
	}
	return '\0';
}
string GenerateWord(int order)
{
	string FourDigitOfKey = ""; //áÇÒã ÊÍØ ÞãíÉ ÇÈÊÏÇÆíÉ ááÓÊÑíäÛ ãÔÇä ßá ãÑÉ ÈíÑÏ ÈíÝæÊ Úá ÝÇäßÔä íÕÝÑ ÇáßáÇã 
	                            // íáí ßÇä ãÍÝæÙ ãä ÇáÇÓÊÏÚÇÁ íáí ÞÈáæ
	
	FourDigitOfKey += RandomChar(order);
	FourDigitOfKey += RandomChar(order);
	FourDigitOfKey += RandomChar(order);
	FourDigitOfKey += RandomChar(order);
		
	return FourDigitOfKey;
}
string GenerateKey(int order)
{
	string Key = "";
	Key = GenerateWord(order) + "-" + GenerateWord(order) + "-" + GenerateWord(order) + "-" + GenerateWord(order);
	return Key;
}
void PritKye(int NumberOfKeys , int order)
{
	for (int i = 1; i <= NumberOfKeys; i++)
	{
		cout << "Key [" << i << "] : " << GenerateKey(order) << endl;
	}
}
int main()
{
	srand((unsigned)time(NULL));
	int order = ReadOrder();
	int NumberOfKeys = ReadPositveNumber("Please Enter How Many Keys Do You Want To Generate : ");
	PritKye(NumberOfKeys,order);
	

	//string x = 'A' ;Error
	//cout <<x;
	//string s = string(char(RandomNumber(65, 90))); Error
	//int a = 'a';
}
