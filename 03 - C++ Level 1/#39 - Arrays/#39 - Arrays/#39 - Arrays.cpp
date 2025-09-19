#include <iostream>
using namespace std;

float fnCalculetAvreagGrade(float Mark[3])
{
    return ((Mark[0] + Mark[1] + Mark[2]) / 3);
}
void fnInput(float Mark[3])
{
    //float mark1, mark2, mark3; ÕÇÑæ ãæÌæÏíä ÏÇÎá Aray
    

    cout << "Pleas Enter The First Mark : \n";
    cin >> Mark[0];
    cout << "Pleas Enter The Second Mark : \n";
    cin >> Mark[1];
    cout << "Pleas Enter The Thierd Mark : \n";
    cin >> Mark[2];

}

void fnOutPut(float Mark[3])
{
    cout << "\n" << "The Avrage of Mark Is : " << fnCalculetAvreagGrade(Mark) << endl;

}

int main()
{
    float Mark[3];
    fnInput(Mark);
    fnOutPut(Mark);
}