/*#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;


void WriteOnFile(string FileName)
{
    fstream MyFile;

    // ��� ����� �� ��� ������� (���� ������ ��� �� ��� �������)
    MyFile.open(FileName, ios::out); // Write Mode ���� ������� �� �� ���� ����� ����� ��� ��� ����� ��� ������ 
    // ������ ��� ��� �����

    if (MyFile.is_open()) {
        MyFile << "Ali\n";
        MyFile << "Shadi\n";
        MyFile << "Maher\n";
        MyFile << "Fadi\n";
        MyFile << "Lama\n";


        MyFile.close(); // �� ������
    }
}
void LoadDataFromFileToVector(string FileName, vector<string>& vFileContent) 
{
    fstream MyFile;

    // ��� ����� ���� �������
    MyFile.open(FileName, ios::in);

    if (MyFile.is_open())
    {
        string Line;

        while (getline(MyFile, Line))
        {
            vFileContent.push_back(Line);
        }

        MyFile.close();
    }
    else {
        cout << "Could not open the file!" << endl;
    }
}
void EditLine(vector<string> &vFileContent)
{
        for (string& Line : vFileContent) 
        {
            if (Line == "Ali") 
            {
                Line = "";
                //vFileContent.push_back(Line); ���� ���� ���� Push ��� �� ��� ���� �����
            }
        }
}
void WriteOnFileFromVectorAfterEdit(string FileName , vector<string> &vFileContent)
{
     fstream MyFile;

    // ��� ����� �� ��� ������� (���� ������ ��� �� ��� �������)
    MyFile.open(FileName, ios::out); // Write Mode ���� ������� �� �� ���� ����� ����� ��� ��� ����� ��� ������ 
    // ������ ��� ��� �����

    if (MyFile.is_open()) {
       
        for (string& Line : vFileContent)
        {
            if (Line != "") {
                MyFile << Line << endl;
            }
        }

        MyFile.close(); // �� ������
    }
}
int main()
{
	vector<string> vFileContent;
    string FileName = "MyFile.txt";

    WriteOnFile(FileName);
    LoadDataFromFileToVector(FileName, vFileContent);
    EditLine(vFileContent);
    WriteOnFileFromVectorAfterEdit(FileName, vFileContent);


    return 0;
}
*/

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

void LoadDataFromFileToVector(string FileName, vector<string>& vFileContent) {
    fstream MyFile;
    MyFile.open(FileName, ios::in); // read mode

    if (MyFile.is_open()) {
        string Line;
        while (getline(MyFile, Line)) {
            vFileContent.push_back(Line);
        }
        MyFile.close();
    }
}

void SaveVectorToFile(string FileName, vector<string> vFileContent) {
    fstream MyFile;
    MyFile.open(FileName, ios::out); // overwrite mode

    if (MyFile.is_open()) {
        for (string Line : vFileContent) {
            if (Line != "") {
                MyFile << Line << endl;
            }
        }
        MyFile.close();
    }
}

void DeleteRecordFromFile(string FileName, string Record) {
    vector<string> vFileContent;
    LoadDataFromFileToVector(FileName, vFileContent);

    for (string& Line : vFileContent) {
        if (Line == Record) {
            Line = ""; // ���� �����
        }
    }

    SaveVectorToFile(FileName, vFileContent);
}

void PrintFileContent(string FileName) {
    fstream MyFile;
    MyFile.open(FileName, ios::in); // read mode

    if (MyFile.is_open()) {
        string Line;
        while (getline(MyFile, Line)) {
            cout << Line << endl;
        }
        MyFile.close();
    }
}

int main() {
    cout << "File Content Before Delete.\n";
    PrintFileContent("MyFile.txt");

    DeleteRecordFromFile("MyFile.txt", "Ali");

    cout << "\n\nFile Content After Delete.\n";
    PrintFileContent("MyFile.txt");

    return 0;
}
