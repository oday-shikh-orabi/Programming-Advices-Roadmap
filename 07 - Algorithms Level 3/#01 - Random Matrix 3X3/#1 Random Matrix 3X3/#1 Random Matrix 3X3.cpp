#include <iostream>
#include <vector>
#include "MyLib.h"
#include <time.h>

using namespace std;
using namespace MyLib;

int main()
{
	srand((unsigned)time(NULL));
	int Matrix[9];
	
	for (int i = 0; i < 9; i++)
	{
		Matrix[i] = MyLib::RandomNumber(1, 100);
	}

	cout << "The Following is a 3X3 random Matrix:" << endl;
	for (int i = 1; i <= 9; i++)
	{

		cout << Matrix[i-1] << MyLib::Tap(1);

		if(i % 3 == 0)
		{
			cout << endl;
		}
		
	}
}
 
//vector<int> Mat;


	//ÇáÑíäÌÏ áæÈ ÈÊÒÈØ áãÇ Êßæä ÚÇØí ÇáãÕİæİÉ Çæ ÇáİíßÊæÑ Øæá 
	// ÍÇæá ãÚ ÇáãÕİæİÇÊ ÇÓÊÎÏã ÇáİæÑ ÇáÚÇÏíÉ ÇáÇ ÇĞÇ ßäÊ ãÍÏÏ ááãÕİæİÉ Øæá æÈÏß ÊãÔí Úáì ßá ÇáÚäÇÕÑ ÈÓ ÇáÇİÖá ÎáÕ ÊÓÊÎÏã ÇáÚÇÏíÉ

	/*for (int Number : Mat) åæä ÇäÊ ÇáäãÈÑ ÈíÇÎÏ ŞíãÉ ÇáÚäÕÑ ÇáÇæá íáí ÈÇáİíßÊæÑ ãæ ÚÏÇÏ åÇÏ
	{
		Number = MyLib::RandomNumber(1, 100); // ÇĞÇ ÈÏß ÊÓÊÎÏã ÇáãßÊÈÉ ÈßæÏß ÍÕÑÇ ÈÏß ÊÍØåÇ ÈÚÏ Main
		v.push_back(value);
	}
	*/
