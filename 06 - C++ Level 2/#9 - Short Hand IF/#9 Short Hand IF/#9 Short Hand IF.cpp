#include <iostream>
#include "MyLib.h"
#include "ReadNumLib.h"

int main()
{
	int Num;
	string Result;


	Num = ReadN::ReadIntNumber("Please Enter a Number :");
	
	Result = (Num >= 0) ? "Positive" : "Nigative";

	cout << Result << endl;

	Result = (Num == 0) ? "Zero" : (Num > 0) ? "Positive" : "Nigative";

	cout << Result << endl;
}
