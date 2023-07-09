#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int a, b, c, result;
    cin >> a >> b >> c;

    result = max(max(a, b), c) - min(min(a, b), c);

    cout << result << endl;

    return 0;
}