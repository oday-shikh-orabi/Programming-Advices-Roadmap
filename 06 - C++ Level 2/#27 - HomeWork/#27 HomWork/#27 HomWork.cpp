#include <iostream>

using namespace std;
int main()
{

	int multiplicationT[10][10];


	for (int i = 0; i < 10 ; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			multiplicationT[i][j] = (i + 1)* (j + 1);
		}
	}

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			printf("%0*d ", 2, multiplicationT[i ][j ]);
		}
		cout << endl;
	}

	return 0;
}
