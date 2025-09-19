#include <iostream>
using namespace std;

float fnReadMark()
{
	float Mark;
	cout << "Enter Mark : " << endl;
	cin >> Mark;

	return Mark;
}
string fnCheckPassFail(float Mark)
{
	if (Mark > 50)
		return "Pass";
	else
		return "Fail";

}
void fnPrintResult(float Mark)
{
	cout << fnCheckPassFail(Mark);
}
int main()
{
	fnPrintResult(fnReadMark());
	return 0;
}
