#include <iostream>
using namespace std;


//////////////////////////////ÈÑäÇãÌ íÌãÚáí ÇáÇÑŞÇã ãä 1 Çáì* ÈäÇÁ Úáì ØáÈí ãä İÑÏí Çæ ÒæÌí Çæ ßáæ æíØÈÚáí ÇáãÌãæÚ///////////////////////////////////////////////////////////////


enum enOddOrEven { All = 1, Odd = 2, Even = 3, Other = 4 };

void ReadNumber(int& Number, int& Choice)
{

	cout << "Pleas Enter Number : " << endl;
	cin >> Number;
	cout << "Enter What Do You Want To Sum : \n";
	cout << "1) All \n";
	cout << "2) Odd \n";
	cout << "3) Even \n";
	cin >> Choice;

}
enOddOrEven OddOrEven(int Counter, int Choice)
{
	if (Choice == enOddOrEven::All)
		return enOddOrEven::All;

	else if ((Choice == enOddOrEven::Odd) && (Counter % 2 != 0))
		return enOddOrEven::Odd;
	else if ((Choice == enOddOrEven::Even) && (Counter % 2 == 0))
		return enOddOrEven::Even;
	else
		return enOddOrEven::Other; //ßÊíÑ ãåã ßÇä äÖíİ åí ÇáÇíáÓ áÍÇáåÇ áÇä ßÇä Úã íÕíÑ İí ÎØÃ
}
int SumOddNumberUsing_For(int N, int Choice)
{
	int sum = 0;
	for (int i = 1; i <= N; i++)
	{
		if (OddOrEven(i, Choice) == enOddOrEven::All)
			sum += i;
		else if (OddOrEven(i, Choice) == enOddOrEven::Odd)
			sum += i;
		else if (OddOrEven(i, Choice) == enOddOrEven::Even)
			sum += i;
	}

	return sum;
}
void PrintResult(int sum)
{
	cout << "Sum odd Number Is : " << sum << endl;
}
int main()
{
	int Number, Choice;

	ReadNumber(Number, Choice);
	PrintResult(SumOddNumberUsing_For(Number, Choice));


}
