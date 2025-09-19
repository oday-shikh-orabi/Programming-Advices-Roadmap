#include <iostream>
#include <string>
#include <math.h>
using namespace std;

const float Pi = 3.141592653589793238462643383279502884197;
void ReadTriangleData(float &a,float &b)
{
    
    cout << "Pleas Enter Side : " << endl;
    cin >> a;
    cout << "Pleas Enter Base : " << endl;
    cin >> b;

}

float CircleAreaByITriangle(float a , float b) // „« »Œ ’— Ê»Œ·Ì «·«”„ „⁄»—
{
    float Area = ((Pi * pow(b, 2)) / 4) * ((2 * a - b) / (2 * a + b));

    return Area;
}

void PrintResult(float Area)
{
    cout << "\nCircle Area Is : " << Area << endl;
}
int main()
{
    float Side, Base;

    ReadTriangleData(Side, Base);
    PrintResult(CircleAreaByITriangle(Side, Base));


    return 0;
}
