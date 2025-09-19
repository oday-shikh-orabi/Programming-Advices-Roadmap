#include <iostream>
using namespace std;

void ReadLengthWidth(int &Length,int &Width)
{
    cout << "Pleas Enter Length : " << endl;
    cin >> Length;
    cout << "Pleas Enter Width : " << endl;
    cin >> Width;

}

float CalculateRectangelAngel(int Length, int Width)
{
    return Length * Width;
}

void PrintResult(float RectangelAngel)
{
    cout << "\nRectangel Angel Is : " << RectangelAngel << endl;
}
int main()
{
    int Length, Width;
    ReadLengthWidth(Length, Width);
    PrintResult(CalculateRectangelAngel(Length, Width));


    return 0;
}
