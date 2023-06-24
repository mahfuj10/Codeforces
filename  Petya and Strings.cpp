#include <iostream>
using namespace std;

int main()
{
    string s1, s2;
    cin >> s1 >> s2;

    int size = s1.size(), i = 0;

    for (i = 0; i < size; ++i)
    {
        s1[i] = tolower(s1[i]);
        s2[i] = tolower(s2[i]);
    }

    if (s1 == s2)
        cout << "0" << endl;
    else
    {
        for (i = 0; i < size; ++i)
        {
            if (s1[i] > s2[i])
            {
                cout << "1" << endl;
                break;
            };
            if (s1[i] < s2[i])
            {
                cout << "-1" << endl;
                break;
            };
        }
    }

    return 0;
}