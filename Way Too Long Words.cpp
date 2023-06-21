#include <iostream>
using namespace std;

int main()
{
    int n;
    string s;
    cin >> n;
    while (n--)
    {
        cin >> s;
        int size = s.size();

        if (size > 10)
        {
            cout << s[0] << (size - 2) << s[size - 1] << endl;
        }
        else
        {
            cout << s << endl;
        }
    }
    return 0;
}
