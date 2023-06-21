#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;

    string name = "";
    for (char c : s)
    {
        if (name.find(c) == string::npos)
        {
            name += c;
        }
    }

    int size = name.length();

    if ((size % 2) == 0)
    {
        cout << "CHAT WITH HER!" << endl;
    }
    else
    {
        cout << "IGNORE HIM!" << endl;
    }

    return 0;
}