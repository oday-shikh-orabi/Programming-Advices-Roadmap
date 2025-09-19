/*#include <iostream>
using namespace std;

int main()
{
	int Userinp, Cont = 0;
	int arRandomItems[3] = { 10 , 20 ,30 };
	cout << "Enter Number To Start Search : " << endl;
	cin >> Userinp;

	for (int l = 1 ; l <= 3 ; l++)
	{ 
		if (arRandomItems[Cont] == Userinp)
		{
			cout << "I Fond It ";
			break;

		}

		else if (arRandomItems[Cont] != Userinp)
		{
			cout << "Not Fond It ";
		}
		Cont++;
	}
}*/
#include <iostream>
using namespace std;

int main()
{
    int Userinp;
    int arRandomItems[3] = { 10, 20, 30 };
    bool found = false;

    cout << "Enter Number To Start Search: " << endl;
    cin >> Userinp;

    for (int i = 0; i < 3; i++)
    {
        if (arRandomItems[i] == Userinp)
        {
            found = true;
            break;
        }
    }

    if (found)
    {
        cout << "I Found It" << endl;
    }
    else
    {
        cout << "Not Found It" << endl;
    }

    return 0; // ÅÑÌÇÚ 0 ááÅÔÇÑÉ Åáì äÌÇÍ ÇáÊäÝíÐ
}

