#include <iostream>
using namespace std;

int main()
{
    int t, x, y, z, xsum(0), ysum(0), zsum(0);
    cin >> t;

    while (t--)
    {
        cin >> x >> y >> z;
        xsum += x;
        ysum += y;
        zsum += z;
    }

    if (xsum == 0 && ysum == 0 && zsum == 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
