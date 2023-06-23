#include <iostream>
#include <algorithm>
using namespace std;

int main()
{

    string math;
    cin >> math;

    int arr[1001], count = 0;

    for (int i = 0; i < math.size(); ++i)
    {
        if (math[i] == '+')
            continue;
        else
        {
            arr[count++] = math[i] - '0';
        }
    }

    sort(arr, arr + count);

    for (int i = 0; i < count; ++i)
    {
        cout << arr[i];
        if (i == count - 1)
            break;
        cout << "+";
    }

    return 0;
}