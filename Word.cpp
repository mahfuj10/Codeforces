
#include <iostream>
using namespace std;

int main()
{
    string word;
    cin >> word;

    int countup = 0, countlow = 0, size = word.size();

    for (char w : word)
    {
        if (isupper(w))
            countup++;
        else
            countlow++;
    }

    if (countup > countlow)
    {
        char ch;
        for (char w : word)
        {
            ch = toupper(w);
            cout << ch;
        }
    }
    else
    {
        char ch;
        for (char w : word)
        {
            ch = tolower(w);
            cout << ch;
        }
    }

    return 0;
}