#include <iostream>
#include <string>
using namespace std;

int fnReadNumber()
{
    int Number;
    cout << "Enter Number :" << endl;
    cin >> Number;

    return Number;
}
float fnCalculateHalfNumber(int Number)
{
     //åí ãÇİí ÏÇÚí ÊÚÑİ ãÊÍæá æÊÇÎÏ ĞÇßÑÉ æÇäÊ İíß ÊÑÌÚ ÇáŞíãÉ ÈÏæä ãÊÍæá

    return (float) Number / 2;
}
void fnPrintHalfNumber(int Number)
{
    string Result = "Half Of " + to_string(Number) + " Is : " +to_string(fnCalculateHalfNumber(Number));
                           //ÈÇáÓí ÔÇÑÈ ÈÇáÏãÌ Èíä äÕ æÚÏÏ áÍÇáæ ÈÍæá ÇáÚÏÏ áÓÊÑíäÛ ÈÚÏíä ÈíÏãÌæ ãÚ ÇáäÕ íáí ŞÈáæ 
                          //ÇãÇ åæä ÈÇáÓí ÈáÓ ÈÇáãÊÍæá áãÇ ÈÏß ÊÌí ÊÏãÌ Èíä ÚÏÏ æäÕ ÈÏß ÊÍæá ÇáäÕ áÓÊÑíäÛ
 // İíäÇ äÓÊÎÏã İÇäßÔä áÍÓÇÈ ÚãáíÉ ÌæÇ İÇäßÔä ÇáØÈÇÚÉ æãÇ İí ÏÇÚí ãÑÑæ áÍÊì ÇÓÊÎÏãæ æãæ ÖÑæÑí ßáæ äÚÑİæ ÈÇáãíä
    cout << Result << endl;

}
float main()
{
    fnPrintHalfNumber(fnReadNumber());

    return 0;
}
