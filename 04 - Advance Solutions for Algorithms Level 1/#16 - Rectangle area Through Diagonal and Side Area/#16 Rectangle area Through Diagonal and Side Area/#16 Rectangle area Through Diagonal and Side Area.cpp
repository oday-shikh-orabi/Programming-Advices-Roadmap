#include <iostream>
#include <math.h>
using namespace std;

void ReadLengthDiagonal(float& Length,float& Diagonal)
{
    cout << "Pleas Enter Length : " << endl;
    cin >> Length;
    cout << "Pleas Enter Diagonal : " << endl;
    cin >> Diagonal;

}

float RectangleAreaThroughDiagonalAndSideArea(float Length, float Diagonal) // „« »Œ ’— Ê»Œ·Ì «·«”„ „⁄»—
{
    return Length * (sqrt(pow(Diagonal, 2) - pow(Length, 2)));
}

void PrintResult(float RectangelArea)
{
    cout << "\nRectangel Area Is : " << RectangelArea << endl;
}
int main()
{
    float Length, Diagonal;
    ReadLengthDiagonal(Length, Diagonal);
    PrintResult(RectangleAreaThroughDiagonalAndSideArea(Length, Diagonal));


    return 0;
}
