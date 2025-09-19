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
void PrintResult(int Age)
{

    if (ValidateNumberInRange(Age , 18 , 45)) //ãÇÝí ÏÇÚí ãÑÑ ÝÑæã Êæ æÓÇæíáåã ÈÇÑíãÊÑ áÇáåã áÇäí ÑÍ ÏÎáåã ÝßÓÏ 
                                                     // ÈÓ ÈíÕÝì ÇáÚãÑ ÈÏí ãÑÑ ãä ÇáÞÑÇÁÉ
    {
        cout << "\n" << Age << " Is a Vaild Age" << endl;
    }
    else
        cout << "\n" << Age << " Is a Invaild Age" << endl;

}
int main()
{
    PrintResult(ReadAge());

    return 0;
}
