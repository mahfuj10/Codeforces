#include <iostream>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    int result;

    if (k <= (n + 1) / 2)
    {
        result = 2 * k - 1;
    }
    else
    {
        k -= (n + 1) / 2;
        result = k * 2;
    }

    cout << result << endl;

    return 0;
}
