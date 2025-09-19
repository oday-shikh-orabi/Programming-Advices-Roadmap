#include <iostream>
using namespace std;

enum enPassFail{Pass , Fail};
float fnReadMark()
{
	float Mark;
	cout << "Enter Mark : " << endl;
	cin >> Mark;

	return Mark;
}
enPassFail fnCheckNark(float Mark)
{
	if (Mark > 50)
		return enPassFail::Pass;
	else
		return enPassFail::Fail;

}
void fnPrintResult(float Mark)
{
	if (fnCheckNark(Mark) == enPassFail::Pass)
		cout << "Pass";
	else 
		cout << "Fail";

}
int main()
{
	fnPrintResult(fnReadMark());
	return 0;
}
