#include <iostream>
using namespace std;

int ReadMark()
{
    int Mark;
    cout << "Pleas Enter Mark : " << endl;
    cin >> Mark;

    return Mark;

}
bool ReadMarkInRange(int Mark,int From, int To)
{
    return (Mark >= From && Mark <= To);
}
int ReadUntelMarkBetwen(int From, int To)
{
    int Mark = 0;

    do
    {
        Mark = ReadMark();
    } while (!ReadMarkInRange(Mark, From, To));

    return Mark;
}
bool PassRange(int Mark)
{
    return(Mark >= 50);
}
void PrintResult(int Mark)
{
    if (PassRange(Mark))
        cout << "Pass" << endl;
    else
        cout << "Faild";
}
int main()
{
    PrintResult(ReadUntelMarkBetwen(0, 100));
}
