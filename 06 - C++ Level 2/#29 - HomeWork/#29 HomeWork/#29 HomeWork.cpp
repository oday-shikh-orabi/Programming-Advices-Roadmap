#include <vector>
#include <iostream>
using namespace std;

int ReadPlayAgin()
{
    char PlayAginY_N;
    do
    {
        cout << "\n" << "Do You Want To Play again ? Y / N ? ";
        cin >> PlayAginY_N;
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // ��� ���� �������  ��� aa 
    } while (PlayAginY_N != 'Y' && PlayAginY_N != 'y' && PlayAginY_N != 'N' && PlayAginY_N != 'n');

    return PlayAginY_N;
}

void ReadNumber(vector<int> &vNumbers)
{
    char PlayAginY_N = 'Y';
    int Number;

    while (PlayAginY_N == 'Y' || PlayAginY_N == 'y')
    {
        cout << "\nPlease Enter a Number :" << endl;
        cin >> Number;

        vNumbers.push_back(Number);

        PlayAginY_N = ReadPlayAgin();

    }
        
}
void PrintResutl(vector<int> & vNumbers) //���� ���� ��� By ref ���� ���� ��� ���� 
                                       //��������
                                       // ���� �� ����� ������ ���� 10 ���� ����� ���� ����� ������ ����� ��� ��� ���� ������� �� �������� ������
{
    // ranged loop
    cout << "Vector Elements : ";
    for (int& Number : vNumbers)
    {
        cout << Number << " ";
    }
    cout << endl;

}


int main()
{
    vector<int> vNumbers;

    ReadNumber(vNumbers);


    PrintResutl(vNumbers);

    return 0;
}
