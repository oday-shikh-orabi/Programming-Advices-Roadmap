#include <iostream>
using namespace std;


//////////////////////////////ÈÑäÇãÌ íÌãÚáí ÇáÇÑŞÇã ãä 1 Çáì* ÈäÇÁ Úáì ØáÈí ãä İÑÏí Çæ ÒæÌí Çæ ßáæ æíØÈÚáí ÇáãÌãæÚ///////////////////////////////////////////////////////////////


enum enOddOrEven {All = 1 , Odd = 2, Even = 3 , Other =4};

int ReadNumber()
{
	int Number;
	cout << "Pleas Enter Number : " << endl;
	cin >> Number;
	
	return Number;
}
int ReadUserChoice() //(ÎáíäÇåÇ áÍÇáåÇ ãÔÇä íßæä ÇáßæÏ ÇæÖÍ (ßáíä
{
	int Choice;
	cout << "Enter What Do You Want To Sum : \n";
	cout << "1) All \n";
	cout << "2) Odd \n";
	cout << "3) Even \n";
	cin >> Choice;

	return Choice;
}
bool ShouldIncludeNumber(int  Choice, int Counter)
{
	if (Choice == enOddOrEven::All)
		return true;
	else if ((Choice == enOddOrEven::Odd) && (Counter % 2 != 0))
		return true;
	else if ((Choice == enOddOrEven::Even) && (Counter % 2 == 0))
		return true;
	else
		return false; //ßÊíÑ ãåã ßÇä äÖíİ åí ÇáÇíáÓ áÍÇáåÇ áÇä ßÇä Úã íÕíÑ İí ÎØÃ
}
int SumNumbersUsing_For(int Choice, int N) // ÈÓ ÊÍÓ İí ÊßÑÇÑ ÛíÑ ØÑíŞÉ ßÊÇÈÉ ÇáßæÏ æİíß ÊÓÚíä ÈÔÇÊ
{
	int sum = 0;
	for (int i = 1; i <= N; i++) 
	{
		if (ShouldIncludeNumber(Choice,i ))
			sum += i;
	}

	return sum;
}
void PrintResult(int sum)
{
	cout << "Sum Numbers Is : " << sum << endl;
}
int main()
{
	int number = ReadNumber();
	int choice = ReadUserChoice();

	PrintResult(SumNumbersUsing_For(choice,number )); //íİÖá ãÇ äãÑÑ ÇßÊÑ ãä İÇäÔßä æÇÍÏ ÈÇáÈÇÑãíÊÑ ãÚÏ ÈíÕíÑ ÇáßæÏ æÇÖÍ
	                                                  //Ôæ ãäÓÇæí Èåí ÇáÍÇáÉ ãäÃÓäÏ ÇáİÇäßÔä æÇáŞíãÉ íáí ÈíÑÌÚåÇ æãäÎÒäæ ÈãÊÍæá
	                                                  //ÈÚÏíä ÈäãÑÑ ÇáãÊÍæá ááİÇäßÔä ÇİÖá ãä ÊãÑíÑ ÇáİÇäßÔä ãÊá ãÇåí í
	

}
