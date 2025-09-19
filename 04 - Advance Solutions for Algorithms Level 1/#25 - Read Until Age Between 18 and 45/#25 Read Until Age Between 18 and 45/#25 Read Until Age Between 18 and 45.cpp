#include <iostream>
using namespace std;

int ReadAge()
{
    int Age;
    do
    {
        cout << "Pleas Enter Your Age : " << endl;
        cin >> Age;
    } while (Age < 18 || Age > 45);

    return Age;

}
bool ValidateNumberInRange(int Age, int From, int To) //lb*
{
    return (Age >= From && Age <= To);
}
void PrintResult(int Age)
{

    cout << "\n" << " Your Age Is : " << Age << endl;

}
int main()
{
    PrintResult(ReadAge());

    return 0;
}
