#include <string.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

class Library
{
    int id;
    char name[100];
    char author[100];
    char student[100];
    int price;
    int pages;
};

int takeInput()
{
    int input;
    while (input != 3)
    {
        cout << "Enter 1 to input details like id, name, author, student, price, pages" << endl;
        cout << "Enter 2 to display detials" << endl;
        cout << "Enter 3 to quit" << endl;
        cin >> input;
    };
    return input;
};

// void addBook(int count){
//     Library lib[20];
//     cout << "Enter book id ";
//     cin >> lib[count].id;
//     cout << "Enter book name ";
//     cin >> lib[count].name;
//     cout << "Enter book author ";
//     cin >> lib[count].author;
//     cout << "Enter book price ";
//     cin >> lib[count].price;
//     cout << "Enter book pages ";
//     cin >> lib[count].pages;
//     count++;
// };

int main()
{
    Library lib[20];
    int count = 0;

    int input = takeInput();
    switch (input)
    {
    case 1:
        cout << "TEESSssssssss";
        break;
    default:
        cout << "Done" << input;
    };

    return 0;
}