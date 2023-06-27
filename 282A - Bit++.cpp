#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int n = 0;
    while (t--)
    {
        string s;
        cin >> s;
        if (s[1] == '+')
        {
            n++;
        }
        else
        {
            n--;
        }
    }
    cout << n << endl;

    return 0;
}