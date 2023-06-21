#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;

    if (s.size() % 2)
    {
        s.erase(s.begin() + s.size() / 2);
    }
    if (s != string(s.size(), s[0]))
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}
