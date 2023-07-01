#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, even = 0, odd = 0;
        cin >> n;

        n *= 2;

        for (int i = 0; i < n; ++i)
        {
            cin >> x;
            if (x % 2 == 0)
                even++;
            else
                odd++;
        }

        if (even == odd)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}