#include <iostream>
#include <string>
using namespace std;

                                               //«· ‘›Ì— Ê›ﬂ «· ‘›Ì—

string ReadText()
{
    string Text;
    cout << "Please Enter Text :" << endl;
    getline(cin, Text);

    return Text;
}
string EncrybtText(string Text , const short EncrybtionKey) // ÊŸÌ›… Â«œ «·›«‰ﬂ‘‰ «· ‘›Ì—
{
    for (int i = 0; i < Text.length();i++)
    {
        Text[i] = char(Text[i] + EncrybtionKey) ; //⁄„ ‰÷Ì› ·ﬂ· Õ—› „‰ «·‰’ «·„œŒ· —ﬁ„ «· ‘›Ì— »«·«⁄ „«œ ⁄·Ï «· —„Ì“ 
                                                  //»«· «·Ì —Õ Ì €Ì— ﬂ· «·‰’
    }
    return Text;
}
string DecrybtText(string EncrybtText, const short EncrybtionKey) //ÊŸÌ›… Â«œ «·›«‰ﬂ‘‰ ›ﬂ «· ‘›Ì—
{
    for (int i = 0; i < EncrybtText.length();i++)
    {
        EncrybtText[i] = char(EncrybtText[i] - EncrybtionKey);
    }
    return EncrybtText;
}
int main()
{
    const short EncrybtionKey = 2; // —ﬁ„ «· ‘›Ì— «Ê „› «Õ «· ‘›Ì— «Ê —ﬁ„ ›ﬂ «·‘Ì›—…
    string Text = ReadText();
    string Encrybt = EncrybtText(Text, EncrybtionKey);
    string Decrybt = DecrybtText(Encrybt, EncrybtionKey);


    cout << "Text Befor Encrybtion : " << Text << endl;
    cout << "Text After Encrybtion : " << Encrybt << endl;
    cout << "Text After Decrybtion : " << Decrybt << endl;


    return 0;
}
