#include <iostream>
#include <string>
using namespace std;

struct stGlass
{
    string sizeOfGlass;
    unsigned short NumOfGlass;
    //enum color {READ , Yellow};
};

struct stPic
{
    string sizeOfPic;
    unsigned short NumOfpic;
};

struct stPen
{
    string Color;
    string sizeOfPen;
    unsigned short NumOfPen;
};

struct stBook
{
    string Color;
    string sizeOfBook;
    unsigned short NumOfBook;
};
struct stLibrary
{
    stBook Book;
    stPen Pen;
    stPic Pic;
    stGlass Glass;
};


void fnInput(stLibrary &library ,int &cont)
{

    int NumchoesInput;

    
        if (cont == 1)
        {
            NumchoesInput = 0;
            while (NumchoesInput != 5)
            {
                cout << "\nPleas Enter What do you want to input : \n1)Book \n2)Pen \n3)Glass \n4)Pic \n5)Back" << endl;
                cin >> NumchoesInput;


                if (NumchoesInput == 1)
                {
                    cout << "Enter How many Book" << "\n";
                    cin >> library.Book.NumOfBook;
                    cout << "Enter What Size Of Book" << "\n";
                    cin.ignore(1, '\n');
                    getline(std::cin, library.Book.sizeOfBook);  // ·« Ì„ﬂ‰ ﬂ «»… «ﬂÀ— „‰ ﬂ·„… »Ì‰Â« „”«›«  »”»» cin ÌÃ» ⁄·Ì‰« «” Œœ«„ getline()
                    cout << "Enter What Colore of Book" << "\n";             // getline »œÊ string 
                    // «Ì„  »” Œœ„ ignore
                  // ·„« »œÌ «” Œœ„ getline Ê›ÊﬁÂ« „œŒ· ⁄œœ
                    getline(std::cin, library.Book.Color);

                }
                else if (NumchoesInput == 2)
                {
                    cout << "Enter How many Pen" << "\n";
                    cin >> library.Pen.NumOfPen;
                    cout << "Enter What Size Of Pen" << "\n";
                    cin.ignore(1, '\n');
                    getline(std::cin, library.Pen.sizeOfPen);
                    cout << "Enter What Colore of Pen" << endl;
                    getline(std::cin, library.Pen.Color);

                }
                else if (NumchoesInput == 3)
                {
                    cout << "Enter How many Glass" << "\n";
                    cin >> library.Glass.NumOfGlass;
                    cout << "Enter What Size Of Glass" << endl;
                    cin.ignore(1, '\n');
                    getline(std::cin, library.Glass.sizeOfGlass);

                }
                else if (NumchoesInput == 4)
                {
                    cout << "Enter How many Pic" << "\n";
                    cin >> library.Pic.NumOfpic;
                    cout << "Enter What Size Of Pic" << endl;
                    cin.ignore(1, '\n');
                    getline(std::cin, library.Pic.sizeOfPic);

                }

            }
        }
    
}
    void fnOutput(stLibrary library , int &cont)
    {
        int NumchoesOutput;
        if (cont == 2)
        {
            NumchoesOutput = 0;
            while (NumchoesOutput != 5)
            {
                cout << "\nPleas Enter What do you want to outPut : \n1)Book \n2)Pen \n3)Glass \n4)Pic \n5)Back" << endl;
                cin >> NumchoesOutput;


                if (NumchoesOutput == 1)
                {
                    cout << "Number of Book : " << library.Book.NumOfBook << "\n";
                    cout << "Size Of Book : " << library.Book.sizeOfBook << "\n";
                    cout << "Enter What Colore of Book : " << library.Book.Color << endl;
                }
                else if (NumchoesOutput == 2)
                {
                    cout << "Number of Pen : " << library.Pen.NumOfPen << "\n";
                    cout << "Size Of Pen : " << library.Pen.sizeOfPen << "\n";
                    cout << "Colore of Pen : " << library.Pen.Color << endl;
                }
                else if (NumchoesOutput == 3)
                {
                    cout << "Number of Glass : " << library.Glass.NumOfGlass << "\n";
                    cout << "Size Of Glass : " << library.Glass.sizeOfGlass << endl;
                }
                else if (NumchoesOutput == 4)
                {
                    cout << "Number of Pic : " << library.Pic.NumOfpic << "\n";
                    cout << "Size Of Pic : " << library.Pic.sizeOfPic << endl;

                }

            }
        }
    };
    void fnStartI()
    {
        int cont = 0;
        stLibrary library;

        while (cont != 3)
        {
            cout << "Pleas Enter What do you want : \n1)input \n2)outbut \n3)EXIT\n";
            cin >> cont;

            //stLibrary library; // €·ÿ  ⁄—›Â« ÂÊ‰ ·«‰ »ﬂ· œÊ—… „‰ œÊ—«  «·Õ·ﬁ… Ì „ «‰‘«¡ ﬂ«∆‰ ÃœÌœ „‰ «·” —«ﬂ‘— (»  ⁄—› „‰ ÃœÌœ Ê›«÷Ì…)Ê» «· «·Ì » ÷Ì⁄ «·»Ì«‰«  Ì·Ì «œŒ· Â« »«·œÊ—… «·”«»ﬁ…
            fnInput(library, cont);
            fnOutput(library, cont);
        }
    }
int main()
{
    fnStartI();

    cout << "\n\n\a************************* Good Bye :) ***************************" << endl;
}
