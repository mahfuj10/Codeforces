#include <string.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

class Library
{
public:
    int id;
    char name[100];
    char author[100];
    char student[100];
    int price;
    int pages;
};

void addBook(int count)
{
    Library lib[20];
    cout << "Enter book id:- ";
    cin >> lib[count].id;
    cout << "Enter book name:- ";
    cin >> lib[count].name;
    cout << "Enter book author:- ";
    cin >> lib[count].author;
    cout << "Enter book price:- ";
    cin >> lib[count].price;
    cout << "Enter book pages:- ";
    cin >> lib[count].pages;
    count++;
};

void displayBook(int count)
{
    Library lib[20];
    cout << "Your total books " + count << endl;
    for (int i = 0; i < count; ++i)
    {
        cout << "Book id - " + lib[count].id << endl;
    }
}

int main()
{
    int input;

    while (input != 3)
    {
        cout << "Enter 1 to input details like id, name, author, student, price, pages" << endl;
        cout << "Enter 2 to display detials" << endl;
        cout << "Enter 3 to quit" << endl;
        cin >> input;
        int count = 0;
        switch (input)
        {
        case 1:
            addBook(count);
            break;
        case 2:
            displayBook(count);
            break;
        default:
            cout << "TEst";
        }
    };

    return 0;
}