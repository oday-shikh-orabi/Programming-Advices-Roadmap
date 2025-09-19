#include <iostream>
#include <string>
#include <math.h>
using namespace std;

const float Pi = 3.141592653589793238462643383279502884197;
void ReadTriangleData(float& a, float& b , float &c)
{

    cout << "Pleas Enter Triangle siad a : " << endl;
    cin >> a;
    cout << "Pleas Enter Triangle siad b : " << endl;
    cin >> b;
    cout << "Pleas Enter Triangle siad c : " << endl;
    cin >> c;

}

float CircleAreaByATriangle(float a, float b , float c) // וזה ַ־ÊױׁÊ הזÚז ָֽׁÝ
{
    float p = (a + b + c) / 2;

    float t = (a * b * c) / (4 * sqrt(p * (p - a) * (p - b) * (p - c)));

    float Area = Pi * pow(t, 2); //וזה דװַה הזײֽ ַבßזֿ ַßÊׁ Úדבהַ וםß

    return Area;
}

void PrintResult(float Area)
{
    cout << "\nCircle Area Is : " << Area << endl;
}
int main()
{
    float a , b , c;

    ReadTriangleData(a , b , c);
    PrintResult(CircleAreaByATriangle(a, b, c));


    return 0;
}
