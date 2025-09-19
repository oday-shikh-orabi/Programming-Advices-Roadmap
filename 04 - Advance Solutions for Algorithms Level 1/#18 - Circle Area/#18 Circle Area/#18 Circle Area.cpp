#include <iostream>
#include <string>
#include <math.h>
using namespace std;

const float Pi = 3.14;
float ReadRadius()
{
    float R;
    cout << "Pleas Enter radius : " << endl;
    cin >> R;
   
    return R;
}

float CalculateCircleArea(float R) // „« »Œ ’— Ê»Œ·Ì «·«”„ „⁄»—
{
    return Pi * pow(R, 2);
}

void PrintResult(float CircleArea)
{
    cout << "\nCircle Area Is : " << to_string( CircleArea) << endl;
}
int main()
{
    PrintResult(CalculateCircleArea(ReadRadius()));


    return 0;
}
