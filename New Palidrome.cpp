#include <iostream>
using namespace std;

int main()
{
    string s;
    int n;
    cin >> n;

    while (n--)
    {
        cin >> s;

        if (s.size() % 2)
        {
            s.erase(s.begin() + s.size() / 2);
        }
        if (s != string(s.size(), s[0]))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
