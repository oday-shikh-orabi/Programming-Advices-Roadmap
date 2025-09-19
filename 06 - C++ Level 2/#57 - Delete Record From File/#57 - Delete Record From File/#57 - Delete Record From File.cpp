/*#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;


void WriteOnFile(string FileName)
{
    fstream MyFile;

    // › Õ «·„·› ›Ì Ê÷⁄ «·ﬂ «»… (”Ì „ ≈‰‘«ƒÂ ≈–« ·„ Ìﬂ‰ „ÊÃÊœ«)
    MyFile.open(FileName, ios::out); // Write Mode »Ê÷⁄ «·ﬂ «»… ﬂ· „«  › Õ «·„·› »Ì„”Õ Ì·Ì ﬂ«‰ „ﬂ Ê» ﬁ»· »«·„·› 
    // Ê»Ì”Ã· Ì·Ì »œﬂ  ”Ã·Ê

    if (MyFile.is_open()) {
        MyFile << "Ali\n";
        MyFile << "Shadi\n";
        MyFile << "Maher\n";
        MyFile << "Fadi\n";
        MyFile << "Lama\n";


        MyFile.close(); // ÂÌ ÷—Ê—Ì…
    }
}
void LoadDataFromFileToVector(string FileName, vector<string>& vFileContent) 
{
    fstream MyFile;

    // › Õ «·„·› »Ê÷⁄ «·ﬁ—«¡…
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
                //vFileContent.push_back(Line); „«›Ì œ«⁄Ì  ⁄„· Push «‰  „‰ ›Êﬁ ›÷Ì  «·”ÿ—
            }
        }
}
void WriteOnFileFromVectorAfterEdit(string FileName , vector<string> &vFileContent)
{
     fstream MyFile;

    // › Õ «·„·› ›Ì Ê÷⁄ «·ﬂ «»… (”Ì „ ≈‰‘«ƒÂ ≈–« ·„ Ìﬂ‰ „ÊÃÊœ«)
    MyFile.open(FileName, ios::out); // Write Mode »Ê÷⁄ «·ﬂ «»… ﬂ· „«  › Õ «·„·› »Ì„”Õ Ì·Ì ﬂ«‰ „ﬂ Ê» ﬁ»· »«·„·› 
    // Ê»Ì”Ã· Ì·Ì »œﬂ  ”Ã·Ê

    if (MyFile.is_open()) {
       
        for (string& Line : vFileContent)
        {
            if (Line != "") {
                MyFile << Line << endl;
            }
        }

        MyFile.close(); // ÂÌ ÷—Ê—Ì…
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
            Line = ""; //  „”Õ «·”ÿ—
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
