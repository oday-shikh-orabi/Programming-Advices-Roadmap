#include <iostream>
using namespace std;

enum en{A = 'a' };
struct stCalculaterData
{
    int Number1, Number2 = 'a';
    char OperationTybe;
};
stCalculaterData ReadCalculaterData()
{
    stCalculaterData CalculaterData;

    cout << "Please Enter Number 1 ?" << endl;
    cin >> CalculaterData.Number1;
    cout << "Please Enter Number 2 ?" << endl;
    cin >> CalculaterData.Number2;
    cout << "Please Enter Operation Tybe ?" << endl;
    cin >> CalculaterData.OperationTybe;

    return CalculaterData;
}
int Calculater(stCalculaterData CalculaterData)
{
    if (CalculaterData.OperationTybe == '+')
        return CalculaterData.Number1 + CalculaterData.Number2;
    if (CalculaterData.OperationTybe == '-')
        return CalculaterData.Number1 - CalculaterData.Number2;
    if (CalculaterData.OperationTybe == '*')
        return CalculaterData.Number1 * CalculaterData.Number2;
    if (CalculaterData.OperationTybe == '/')
        return CalculaterData.Number1 / CalculaterData.Number2;
    else 
        return CalculaterData.Number1 + CalculaterData.Number2;
                //·«“„  Œ·ÌÂ Ì—Ã⁄ ﬁÌ„… «–« „« ﬂ«‰ “«»ÿ Ê·« Õ«·… „‰ Ì·Ì ›Êﬁ „‘«‰ „« Ì’Ì— Œ·· »«· ‘€Ì·
                //ÂÌ »Ì”„ÊÂ« ﬁÌ„… «·«—Ã«⁄ «·«› —«÷Ì…
}
void PrintResult(int Result)
{
    cout << "********************" << endl;
    cout << Result << endl;
}
int main()
{
    PrintResult(Calculater(ReadCalculaterData()));

    return 0;
}
