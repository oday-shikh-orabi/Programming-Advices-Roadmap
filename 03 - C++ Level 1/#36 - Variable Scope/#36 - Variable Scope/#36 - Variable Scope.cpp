#include <iostream>
using namespace std;

int global = 20;
int KOKO(int local1 ,int local2)
{
	return local1 + local2;
}
int main()
{

	cout << global << endl;
	//cout << local1 
	cout << KOKO(10, 30);
}