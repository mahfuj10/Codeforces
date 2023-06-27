#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int t, i, n, m, sum = 0;
    long long int a[3];
    cin >> t;
    while (t--)
    {
        cin >> a[0] >> a[1] >> a[2];

        sort(a, a + 3);

        if (a[0] + a[1] == a[2])
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}