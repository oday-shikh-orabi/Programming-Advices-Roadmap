#include <iostream>
#include <string>
using namespace std;

                                               //������� ��� �������

string ReadText()
{
    string Text;
    cout << "Please Enter Text :" << endl;
    getline(cin, Text);

    return Text;
}
string EncrybtText(string Text , const short EncrybtionKey) // ����� ��� �������� �������
{
    for (int i = 0; i < Text.length();i++)
    {
        Text[i] = char(Text[i] + EncrybtionKey) ; //�� ���� ��� ��� �� ���� ������ ��� ������� ��������� ��� ������� 
                                                  //������� �� ����� �� ����
    }
    return Text;
}
string DecrybtText(string EncrybtText, const short EncrybtionKey) //����� ��� �������� �� �������
{
    for (int i = 0; i < EncrybtText.length();i++)
    {
        EncrybtText[i] = char(EncrybtText[i] - EncrybtionKey);
    }
    return EncrybtText;
}
int main()
{
    const short EncrybtionKey = 2; // ��� ������� �� ����� ������� �� ��� �� �������
    string Text = ReadText();
    string Encrybt = EncrybtText(Text, EncrybtionKey);
    string Decrybt = DecrybtText(Encrybt, EncrybtionKey);


    cout << "Text Befor Encrybtion : " << Text << endl;
    cout << "Text After Encrybtion : " << Encrybt << endl;
    cout << "Text After Decrybtion : " << Decrybt << endl;


    return 0;
}
