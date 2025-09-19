#include <iostream>
#include <string>
using namespace std;

int ReadPositiveNumber(string Message)
{
	int Number;
	do 
	{
		cout << Message << endl;
		cin >> Number;
	} while (Number < 0);
	

	return Number;
}

string CheckIsPrimeNumber(int Number)
{
	if (Number <= 3) 
	{
		return to_string(Number) + " Is Prime Number";
	}


	for (int i = 2; i < Number ;i++)
	{
		if (Number % i == 0)
		{
			return to_string(Number) + " Not Prime Number" ;
		}
		// åæ ÚÏÏ Çæáí ÍÊì íÏÎá ÇáÇİ Çí Çäå ŞÈá ÇáŞÓãÉ Úáì ÚÏÏ ÛíÑ äİÓå æÇáæÇÍÏ ÈÇáÊÇáí åæ ÛíÑ Çæáí ÈíÑÌÚáí æÈØáÚ ÈÑÇ ÇáßæÏ1 íÇåÇ ÇØÈÚåÇ
		// ÇĞÇ ãÇ ÑÌ
	}
	//defult
		return to_string(Number) + " Is Prime Number";
	
}
void PrintResult(string Result)
{
	cout << Result << endl;
}
int main()
{
	PrintResult(CheckIsPrimeNumber(ReadPositiveNumber("Please Enter Positive Number :")));

	return 0;
}
