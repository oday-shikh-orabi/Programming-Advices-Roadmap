#include <iostream>
#include <string>
using namespace std;

struct Glass
{
    string sizeOfGlass;
    unsigned short numOfGlass;
};

struct Picture
{
    string sizeOfPicture;
    unsigned short numOfPicture;
};

struct Pen
{
    string color;
    string sizeOfPen;
    unsigned short numOfPen;
};

struct Book
{
    string color;
    string sizeOfBook;
    unsigned short numOfBook;
};

struct Library
{
    Book book;
    Pen pen;
    Picture picture;
    Glass glass;
};

int main()
{
    Library library;
    int cont = 3, choiceInput = 0, choiceOutput = 0;

    while (cont != 0)
    {
        cout << "Please enter what you want:\n1) Input\n2) Output\n0) EXIT\n";
        cin >> cont;

        if (cont == 1) // Input section
        {
            choiceInput = 0;
            while (choiceInput != 5)
            {
                cout << "\nPlease select what you want to input:\n1) Book\n2) Pen\n3) Glass\n4) Picture\n5) Back\n";
                cin >> choiceInput;
                cin.ignore(); // Clear the input buffer

                if (choiceInput == 1)
                {
                    cout << "Enter how many books:\n";
                    cin >> library.book.numOfBook;
                    cin.ignore(); // Clear the newline character

                    cout << "Enter the size of the book:\n";
                    getline(cin, library.book.sizeOfBook);

                    cout << "Enter the color of the book:\n";
                    getline(cin, library.book.color);
                }
                else if (choiceInput == 2)
                {
                    cout << "Enter how many pens:\n";
                    cin >> library.pen.numOfPen;
                    cin.ignore();

                    cout << "Enter the size of the pen:\n";
                    getline(cin, library.pen.sizeOfPen);

                    cout << "Enter the color of the pen:\n";
                    getline(cin, library.pen.color);
                }
                else if (choiceInput == 3)
                {
                    cout << "Enter how many glasses:\n";
                    cin >> library.glass.numOfGlass;
                    cin.ignore();

                    cout << "Enter the size of the glass:\n";
                    getline(cin, library.glass.sizeOfGlass);
                }
                else if (choiceInput == 4)
                {
                    cout << "Enter how many pictures:\n";
                    cin >> library.picture.numOfPicture;
                    cin.ignore();

                    cout << "Enter the size of the picture:\n";
                    getline(cin, library.picture.sizeOfPicture);
                }
            }
        }
        else if (cont == 2) // Output section
        {
            choiceOutput = 0;
            while (choiceOutput != 5)
            {
                cout << "\nPlease select what you want to output:\n1) Book\n2) Pen\n3) Glass\n4) Picture\n5) Back\n";
                cin >> choiceOutput;

                if (choiceOutput == 1)
                {
                    cout << "Number of books: " << library.book.numOfBook << "\n";
                    cout << "Size of the book: " << library.book.sizeOfBook << "\n";
                    cout << "Color of the book: " << library.book.color << endl;
                }
                else if (choiceOutput == 2)
                {
                    cout << "Number of pens: " << library.pen.numOfPen << "\n";
                    cout << "Size of the pen: " << library.pen.sizeOfPen << "\n";
                    cout << "Color of the pen: " << library.pen.color << endl;
                }
                else if (choiceOutput == 3)
                {
                    cout << "Number of glasses: " << library.glass.numOfGlass << "\n";
                    cout << "Size of the glass: " << library.glass.sizeOfGlass << endl;
                }
                else if (choiceOutput == 4)
                {
                    cout << "Number of pictures: " << library.picture.numOfPicture << "\n";
                    cout << "Size of the picture: " << library.picture.sizeOfPicture << endl;
                }
            }
        }
    }
    cout << "\n\nGood Bye :)" << endl;
    return 0;
}
