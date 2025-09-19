#include <iostream>
#include <string>
using namespace std;

string ReadYourName()
{
	string Name;
	cout << "Plz Enter Your Name : \n";
	getline( cin ,Name);
	//ÇÐÇ ÍØíÊ Óíä ÈíÚãáí ßÊ ááÇÓã ãä ÈÚÏ ÇáÝÑÇÛ
	return Name;
}
void PrintYourName(string Name)
{
	cout << "Your Name Is :" << Name << endl;
}
int main()
{
	
	PrintYourName(ReadYourName());

	//ÊáÞÇÆíÇ ÈÊÊÝÚá ÊÚáíãÇÊ ÇáÝÇäßÔä íáí ÌæÇ áÇä íáí Úã íÕíÑ Çäæ Úã ÇÓÊÏÚí ÇáÊÇÈÚ æÈáÇÎíÑ áíÑÌÚáí ÇáÞíãÉ íáí ÈÏí ãÑÑåÇ
	return 0;
}
