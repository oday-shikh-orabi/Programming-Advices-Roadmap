#include <iostream>
#include <fstream> // ����� �� �������
using namespace std;

int main() {
    fstream MyFile;

    // ��� ����� �� ��� ������� (���� ������ ��� �� ��� �������)
    MyFile.open("MyFile.txt", ios::out); // Write Mode ���� ������� �� �� ���� ����� ����� ��� ��� ����� ��� ������ 
                                                      // ������ ��� ��� �����

    if (MyFile.is_open()) {
        MyFile << "Hi, this is the first line\n";
        MyFile << "Hi, this is the second line\n";
        MyFile << "Hi, this is the third line\n";

        MyFile.close(); // �� ������
    }
    // ����� ��� ����� ����� ������
    // run code > view > solution Explorer > Right Click on name > open folder in file location


    return 0;
}
