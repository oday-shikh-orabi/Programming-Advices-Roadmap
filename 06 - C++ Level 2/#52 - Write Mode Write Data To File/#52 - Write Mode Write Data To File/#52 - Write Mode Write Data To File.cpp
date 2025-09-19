#include <iostream>
#include <fstream> // ãäÖíİ åí ÇáãßÊÈÉ
using namespace std;

int main() {
    fstream MyFile;

    // İÊÍ Çáãáİ İí æÖÚ ÇáßÊÇÈÉ (ÓíÊã ÅäÔÇÄå ÅĞÇ áã íßä ãæÌæÏğÇ)
    MyFile.open("MyFile.txt", ios::out); // Write Mode ÈæÖÚ ÇáßÊÇÈÉ ßá ãÇ ÊİÊÍ Çáãáİ ÈíãÓÍ íáí ßÇä ãßÊæÈ ŞÈá ÈÇáãáİ 
                                                      // æÈíÓÌá íáí ÈÏß ÊÓÌáæ

    if (MyFile.is_open()) {
        MyFile << "Hi, this is the first line\n";
        MyFile << "Hi, this is the second line\n";
        MyFile << "Hi, this is the third line\n";

        MyFile.close(); // åí ÖÑæÑíÉ
    }
    // ØÑíŞÉ İÊÍ Çáãáİ æãßÇä ÊÎÒíäå
    // run code > view > solution Explorer > Right Click on name > open folder in file location


    return 0;
}
