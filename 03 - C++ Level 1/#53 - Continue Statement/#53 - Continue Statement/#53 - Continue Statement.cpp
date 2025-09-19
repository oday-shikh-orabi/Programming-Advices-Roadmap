#include <iostream>
using namespace std;
int main()
{
    int InpNum , Sum = 0;

    for (int i = 1; i <= 5; i++)
    {
        cout << "Please Enter Number " << i << " : \n";
        cin >> InpNum;

        if (InpNum > 50) //ÇĞÇ ÏÎá ÑŞã ÇßÈÑ ãä 50 ÈíÊÌÇåá ÇáÑŞã æãÇ ÈíÌãÚ
        {
            cout << "The Number Is greter than 50 and won't be calculated \a \n";
            continue;
        }
        Sum += InpNum;
    }

    cout << "Sum Is : " << Sum << endl;
}
