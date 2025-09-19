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

void UpdateRecordInFile(string FileName, string Record, string UpdateTo) {
    vector<string> vFileContent;
    LoadDataFromFileToVector(FileName, vFileContent);

    for (string& Line : vFileContent) {
        if (Line == Record) {
            Line = UpdateTo;
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
    cout << "File Content Before Update.\n";
    PrintFileContent("MyFile.txt");

    UpdateRecordInFile("MyFile.txt", "Ali", "Omar");

    cout << "\n\nFile Content After Update.\n";
    PrintFileContent("MyFile.txt");

    return 0;
}
