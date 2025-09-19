#include <iostream>
using namespace std;

void staicAray()
{
	// ÇáãÕİæİÉ ÇáËÇÈÊÉ åí ÇáãÕİæİÉ ÇáÊí íÊã ÊÚííä ØæáåÇ ãä ÇáÊÚÑíİ
	int arnum[3];
	for (int l = 0; l <= 3; l++)
	{

	}
}

int main()
{
	int NumLength , sum = 0 ,cont = 0;

	cout << "Please Enter How Many Number You Want To Sum : " << endl;
	cin >> NumLength;
	int* arNum = new int[NumLength];
	for (int l = 0; l < NumLength; l++ )
	{
		cout << ++cont << ") " << "Please Enter The Number : ";
		cin >> arNum[l];

		sum += arNum[l];
	}
	cout << "Sum Is : " << sum << endl;

	return 0; // ÅÑÌÇÚ 0 ááÅÔÇÑÉ Åáì äÌÇÍ ÇáÊäİíĞ
}