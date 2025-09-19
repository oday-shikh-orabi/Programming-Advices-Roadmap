#include <iostream>
#include <math.h>
using namespace std;

void ReadBaseHeight(float& Base, float& Height)
{
    cout << "Pleas Enter Base : " << endl;
    cin >> Base;
    cout << "Pleas Enter Height : " << endl;
    cin >> Height;

}

float CalculateTriangleArea(float Base, float Height) // „« »Œ ’— Ê»Œ·Ì «·«”„ „⁄»—
{
    return 0.5 * Base * Height;
}

void PrintResult(float TriangleArea)
{
    cout << "\nTriangle Area Is : " << TriangleArea << endl;
}
int main()
{
    float Base, Height;
    ReadBaseHeight(Base, Height);
    PrintResult(CalculateTriangleArea(Base, Height));


    return 0;
}
