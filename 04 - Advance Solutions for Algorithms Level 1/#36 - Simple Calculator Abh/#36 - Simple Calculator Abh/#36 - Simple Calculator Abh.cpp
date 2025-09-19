#include <iostream>
using namespace std;

enum enOperationTybe { Add = '+' , Subtract = '-' , Multiply = '*' ,Divide = '/' };

int ReadNumber(string Massege)
{
    int Number;
    cout << Massege << endl;
    cin >> Number;

    return Number;
}
enOperationTybe ReadOT()
{
    char OT;
    cout << "Please Enter Operation Tybe (+ , - , * , / ) " << endl;
    cin >> OT;

    return (enOperationTybe)OT;
}
int Calculate(int Number1 ,int Number2 , enOperationTybe OperationTybe) // íáí ãÚÑİÉ äÓÎÉ ÌÏíÏÉ ÇäÇ ŞÇÑä
                                                                       // ãÚ ÇáÇÕáíÉ ãä ÇáäãØ ÈÌíÈåÇ 
{
    switch (OperationTybe)
    {
    case enOperationTybe::Add: //You can write Add: only but for future Preferably write it all
        return Number1 + Number2;
    case enOperationTybe::Subtract:
        return Number1 - Number2;
    case Multiply:
    return Number1 * Number2;
    case Divide:
        return Number1 / Number2;
    default:
        return Number1 + Number2;
    }
}
int main()
{
    int Number1 = ReadNumber("Please Enter First Number : ");
    int Number2 = ReadNumber("Please Enter Second Number : ");

    enOperationTybe OT = ReadOT(); //of corse you need id

    cout << "Result " << Calculate(Number1, Number2, OT);
}
