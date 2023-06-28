#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s, ans, reverse = "";
    cin >> s >> ans;

    for (int i = s.length() - 1; i >= 0; --i)
    {
        reverse += s[i];
    }

    if (reverse == ans)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}