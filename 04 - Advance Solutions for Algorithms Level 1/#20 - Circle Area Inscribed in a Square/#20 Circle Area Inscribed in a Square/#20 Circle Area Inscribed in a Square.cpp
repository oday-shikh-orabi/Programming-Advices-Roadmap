#include <iostream>
#include <string>
#include <math.h>
using namespace std;

const float Pi = 3.141592653589793238462643383279502884197;
float ReadSquareSide()
{
    float A;
    cout << "Pleas Enter square side A: " << endl;
    cin >> A;

    return A;
}

float CircleAreaInscribedInASquare(float A) // „« »Œ ’— Ê»Œ·Ì «·«”„ „⁄»—
{
    return (Pi * pow(A , 2)) / 4;
}

void PrintResult(float CircleArea)
{
    cout << "\nCircle Area Is : " << CircleArea << endl;
}
int main()
{
    PrintResult(CircleAreaInscribedInASquare(ReadSquareSide()));


    return 0;
}
