#include <iostream>
using namespace std;


void PrintInvertedNumberPattern()
{
	cout << "\n";
	string word = " ";
	for (int i = 65; i <= 90; i++)
	{
		for (int j = 65; j <= 90; j++)
		{
			for (int k = 65; k <= 90;k++)
			{
				word = word + char(i);
				word = word + char(j);
				word = word + char(k);
								 
				cout << word + "\n";
				word = "";
				//cout << char(i) << char(j) << char(k) << endl; åí ÇÐÇ ÈÏß ÊÎÊÕÑ Úáì ÍÇáß

			}
			
		}
		cout << "\n____________________________\n";
	}
}
int main()
{
	PrintInvertedNumberPattern();
}
