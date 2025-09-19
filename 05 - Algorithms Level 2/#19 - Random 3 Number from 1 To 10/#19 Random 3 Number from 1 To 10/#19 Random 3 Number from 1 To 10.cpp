#include <iostream>
#include <cstdlib>
using namespace std;

                                              //åÇÏ ÇáİÇäßÔä áãÇ ÈÏäÇ äÍÏÏ ãÌÇá
int RandomNumber(int From, int To)
{
	int randnum = rand() % (To - From + 1) + From;

	return randnum;
}
int main()
{
	srand((unsigned)time(NULL));

	/*cout << rand() % 10 << endl;  //endl ÇĞÇ ŞãÊåÇ ÈÊæáÏ ÑŞã ÈÚÏÏ ÇáÎÇäÇÊ íáí ÈÏß íÇå ÈÓ ãÇİíß ÊÍÏÏ ÇáãÌÇá
	cout << rand() % 10 << endl; 
	cout << rand() % 10 << endl;*/

	//cout << rand() << endl; //ÈÊæáÏ ÑŞã ãä 0 á ãÇßÓ Çæİ ÇäÊÌÑ

	cout << RandomNumber(0, 10) << endl;
	cout << RandomNumber(0, 10) << endl;
	cout << RandomNumber(0, 10) << endl;

}
