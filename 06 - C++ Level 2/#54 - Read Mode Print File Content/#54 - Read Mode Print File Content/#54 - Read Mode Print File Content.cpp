#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void PrintFileContenet(string FileName) {
    fstream MyFile;

    // İÊÍ Çáãáİ İí æÖÚ ÇáŞÑÇÁÉ (Read Mode)
    MyFile.open(FileName, ios::in);

    if (MyFile.is_open())
    {
        string Line;

        while (getline(MyFile, Line)) // ÈíÇÎÏ Çæá ÓØÑ ãä Çáãáİ æÈíÎÒäå ÈãÊÛíÑ ÇáÓÊÑíäÛ ÈÚÏíä ÈíäØÈÚ Úá ÔÇÔÉ ÇáßæäÓá
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
