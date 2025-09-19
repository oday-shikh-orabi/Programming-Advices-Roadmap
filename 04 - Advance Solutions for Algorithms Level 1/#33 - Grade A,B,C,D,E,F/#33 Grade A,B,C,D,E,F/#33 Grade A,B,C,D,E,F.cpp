#include <iostream>
using namespace std;

int ReadGrade(int from , int to)
{
    int Grade;
    do
    {

        cout << "Please Enter Your Grade Betwen 0 and 100 : " << endl;
        cin >> Grade;
    } while (Grade < from || Grade > to);

    return Grade;
}
string GetGradeLetter(int Grade)
{
    if (Grade >= 90 && Grade <= 100)
        return "A";
    else if (Grade >= 80 && Grade <= 89)
        return "B";
    else if (Grade >= 70 && Grade <= 79)
        return "C";
    else if (Grade >= 60 && Grade <= 69)
        return "D";
    else if (Grade >= 50 && Grade <= 59)
        return "E";
    else
        return "F";

}
void PrintResult(string Result)
{
    cout << Result << endl;
}
int main()
{
    PrintResult(GetGradeLetter(ReadGrade(0,100)));

    return 0;
}
