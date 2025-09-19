#include <iostream>
#include <string>
using namespace std;

int main()
{
	string st1 = "43.22";
	double du1, du2 = 1.111;
	int a1 = 100;
	float A = 10.22f;


	du1 = stod(st1);
	cout << du1 << endl;
	st1 = to_string(a1);
	cout << st1 << endl;
	st1 = to_string(du2);
	cout << st1 << endl;
	st1 = to_string(A);
	cout << st1 << endl;
	a1 = int(du2);
	cout << du2 << endl;

}