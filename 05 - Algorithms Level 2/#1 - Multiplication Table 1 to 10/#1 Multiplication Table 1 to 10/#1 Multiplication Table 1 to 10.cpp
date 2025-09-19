#include <iostream>
using namespace std;

void PrintMultiplicationTable1to10()
{
	cout << endl;
	cout << "\t\t\tMultiplication Table 1 to 10\t";
	cout << "\n\n";

	for (int i = 1; i <= 10; i++) //hider
	{
		cout << "\t" << i;
	}
	cout << "\n";

	//PrintLine
	cout << "\n------------------------------------------------------------------------------------\n";

}
string columSpertor(int i)
{
	if (i < 10)
		return "    |  ";
	else
	{
		return "   |  ";
	}
}
void PrintMultiplicationTable()
{
	int cont = 1;
	for (int i = 1; i <= 10; i++)
	{
	
		
		cout << i << columSpertor(i);
		
		for (int j = 1; j <= 10; j++)
		{
			
				cout << j * i << "\t"; //ãÑÈÚ ÇáäÌæã ãÑÈÚ ÇáÌÏÇÁ

		}
		cout << "\n"; //Çæá ÝÇäßÔä ÇáÇÓØÑ Ôæ íÚäí ÇáÇÓØÑ íÚäí íáí ÈíäÒá ÓØÑ æáßä ØÈÇÚÉ ÇáÓØÑ ãä ÇáÝÇäßÔä ÇáËÇäí
		             // Úã äØÈÚ ÇáÓØÑ ÈÚÏíä ääÒá åæä
		
	}
}
int main()
{
	PrintMultiplicationTable1to10();
	PrintMultiplicationTable();
}
