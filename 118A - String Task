#include <iostream>
using namespace std;

int main()
{
    string s, str;
    cin >> s;

    for (int i = 0; i < s.length(); ++i)
    {
        if (s[i] == 'a' || s[i] == 'o' || s[i] == 'y' || s[i] == 'u' || s[i] == 'i' || s[i] == 'e' || s[i] == 'A' || s[i] == 'O' || s[i] == 'Y' || s[i] == 'U' || s[i] == 'I' || s[i] == 'E')
            continue;
        else
        {
            str += '.';
            str += (char)tolower(s[i]);
        }
    }

    cout << str << endl;

    return 0;
}