#include <iostream>
#include <string>
#include <math.h>
using namespace std;

const float Pi = 3.14;
float ReadRadius()
{
    float D;
    cout << "Pleas Enter Diameter : " << endl;
    cin >> D;

    return D;
}

float CalculateCircleAreaByDiameter(float D) // �� ����� ����� ����� ����
{
    return (Pi * pow(D, 2)) / 4;
}

void PrintResult(float CircleArea)
{
    cout << "\nCircle Area Is : " << to_string(CircleArea) << endl;
}
int main()
{
    PrintResult(CalculateCircleAreaByDiameter(ReadRadius()));


    return 0;
}
