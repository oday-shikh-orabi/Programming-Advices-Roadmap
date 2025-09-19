#include <iostream>
#include <fstream>
using namespace std;

int main() {
    fstream MyFile;

    // İÊÍ Çáãáİ ãä Ïæä ÍĞİ ãÇ ÓÈŞ ãÚ áÇÖÇİÉ ÇÎÑ Çáãáİ (Append Mode)
    MyFile.open("MyFile.txt", ios::out | ios::app); //append Mode íÇ ÈÊÎáíå åíß
                                                                 // ios::app íÇ ÈÊÓÇæíåÇ åíß İŞØ

    if (MyFile.is_open()) {
        MyFile << "Hi, this is a new line\n";
        MyFile << "Hi, this is another new line\n";
        MyFile.close();
    }

    return 0;
}
