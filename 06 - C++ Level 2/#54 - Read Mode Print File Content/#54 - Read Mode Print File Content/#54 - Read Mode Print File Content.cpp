#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void PrintFileContenet(string FileName) {
    fstream MyFile;

    // ��� ����� �� ��� ������� (Read Mode)
    MyFile.open(FileName, ios::in);

    if (MyFile.is_open())
    {
        string Line;

        while (getline(MyFile, Line)) // ����� ��� ��� �� ����� ������� ������ �������� ����� ������ �� ���� �������
        {
            cout << Line << endl;
        }

        MyFile.close();
    }
}

int main() {
    PrintFileContenet("MyFile.txt");
    return 0;
}
