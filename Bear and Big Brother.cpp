// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;

    int year = 0;

    if (x > y)
    {
        year = 0;
    }
    else
    {
        while (x <= y)
        {
            x *= 3;
            y *= 2;
            year++;
        }
    }

    cout << year << endl;

    return 0;
}