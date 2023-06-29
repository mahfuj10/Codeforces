#include <iostream>
using namespace std;

int main()
{
    int t, sum = 0, h;

    cin >> t >> h;

    while (t--)
    {
        int n;
        cin >> n;
        if (n <= h)
        {
            sum += 1;
        }
        else
        {
            sum += 2;
        }
    }

    cout << sum << endl;

    return 0;
}