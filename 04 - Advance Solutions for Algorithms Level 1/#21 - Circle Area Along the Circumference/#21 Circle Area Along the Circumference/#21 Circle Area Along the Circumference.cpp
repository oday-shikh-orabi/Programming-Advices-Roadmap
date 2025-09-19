#include <iostream>
#include <string>
#include <math.h>
using namespace std;

const float Pi = 3.141592653589793238462643383279502884197;
float ReadCircumference()
{
    float l;
    cout << "Pleas Enter Circumference : " << endl;
    cin >> l;

    return l;
}

float CircleAreaByCircumference(float l) // „« »Œ ’— Ê»Œ·Ì «·«”„ „⁄»—
{
    float Area = (pow(l, 2)) / (4 * Pi);
    return Area;
}

void PrintResult(float Area)
{
    cout << "\nCircle Area Is : " << Area << endl;
}
int main()
{
    PrintResult(CircleAreaByCircumference(ReadCircumference()));


    return 0;
}
