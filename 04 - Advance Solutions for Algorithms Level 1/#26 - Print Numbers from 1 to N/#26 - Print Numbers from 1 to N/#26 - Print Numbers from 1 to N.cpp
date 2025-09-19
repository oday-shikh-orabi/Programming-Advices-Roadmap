#include <iostream>
using namespace std;

int ReadEndNum()
{
    int EndNum;

    cout << "Pleas Enter End Number : " << endl;
    cin >> EndNum;

    return EndNum;
}
void PrintRangeFrom1ToN_UsingFor(int N)
{
    cout << "\n";

    for (int i = 1; i <= N; i++)
    {
        cout << i << endl;
    }
}
void PrintRangeFrom1ToN_UsingDoWhile(int N)
{
    cout << "\n";
    int i = 1;
    do
    {
        cout << i << endl;
        i++;
    } while(i <= N);
}
void PrintRangeFrom1ToN_UsingWhile(int N)
{
    cout << "\n";
    int i = 1;
    while (i <= N)
    {
        cout << i << endl;
        i++;
    }
 
}
int main()
{
    int N;
    N = ReadEndNum();

    PrintRangeFrom1ToN_UsingFor(N); //(ReadEndNum()); //ÇäÇ ÈÏí ÇÞÑÇ ÇáÑÞã ãÑÉ æÍÏÉ ãÇ ÈÏí Öáäí Úã ãÑÑ ÇáÝÇäßÔä ãÔÇä ÇáÑÞã Èßá ÝÇäßÔ
                                    //ÈÏí Íá ÈÏí ÎÒä ÇáÑÞã ÈãßÇä áÇÞÏÑ ãÑÑæ ãä Ïæä ãÇ ÇÓÊÏÚí ÇáÝÇäßÔä
    PrintRangeFrom1ToN_UsingDoWhile(N);
    PrintRangeFrom1ToN_UsingWhile(N);

    return 0;
}
