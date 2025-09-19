#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

void SaveVectorToFile(string FileName, vector<string> vFileContent) 
{
    fstream MyFile;

    // › Õ «·„·› ›Ì Ê÷⁄ «·ﬂ «»… (”Ì„”Õ «·„Õ ÊÏ «·ﬁœÌ„ ÊÌﬂ » «·ÃœÌœ)
    MyFile.open(FileName, ios::out);

    if (MyFile.is_open()) {
        for (string& Line : vFileContent) {
            if (Line != "") {
                MyFile << Line << endl;
            }
        }
        MyFile.close();
    }
   
}

int main() {
    vector<string> vFileContent{ "Ali", "Shadi", "Maher", "Fadi", "Lama" };

    SaveVectorToFile("MyFile.txt", vFileContent);

    return 0;
}
