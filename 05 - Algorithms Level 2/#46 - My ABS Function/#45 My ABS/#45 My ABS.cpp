#include <iostream>
#include <math.h>
using namespace std;

float ReadNumber()
{
	float Number;  

	cout << "Please enter a number? ";
	cin >> Number; 

	return Number;
}
int MyAbs(int Num)
{
	if (Num >= 0)
		return Num;
	else
		return -Num;
}
int main()
{
	cout << "My abs Result : " << MyAbs(-10);
	cout << "c++ abs Result : " << abs(-10);

	return 0;
}
