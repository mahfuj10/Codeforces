#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int sum1 = 0, sum2 = 0;

        string s;
        cin >> s;

        for (int i = 0; i < 3; ++i)
        {
            sum1 += s[i] - '0';
        }

        for (int i = 3; i < 6; ++i)
        {
            sum2 += s[i] - '0';
        }

        if (sum1 == sum2)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}