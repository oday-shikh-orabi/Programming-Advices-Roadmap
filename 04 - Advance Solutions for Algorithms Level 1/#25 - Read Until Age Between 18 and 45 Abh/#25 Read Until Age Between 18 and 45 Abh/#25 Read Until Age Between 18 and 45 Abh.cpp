#include <iostream>
using namespace std;

int ReadAge()
{
    int Age;
    
    cout << "Pleas Enter Your Age : " << endl;
    cin >> Age;
  
    return Age;

}
bool ValidateNumberInRange(int Age, int From, int To) //lb*
{
    return (Age >= From && Age <= To);
}
int ReadUntelAgeBetwen(int From, int To)
{

    int Age = 0;
    // Age = ReadAge();  áÇ ÊÍØåÇ åæä ÈíÕíÑ ÈíÞÑÃåÇ ãÑÊíä æÈíÕíÑ ÇíÑæÑ ÈÇáíæäÊ ÊíÓÊ 
    do
    {
        Age = ReadAge();
    } while (!ValidateNumberInRange(Age, 10, 45));

    return Age;
}
void PrintResult(int Age)
{
    
    cout << "\n" << " Your Age Is : " << Age << endl;

}
int main()
{
    PrintResult(ReadUntelAgeBetwen(18, 45));

    return 0;
}
