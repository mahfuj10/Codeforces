#include <iostream>
using namespace std;

int main()
{
    int n, i, j;
    cin >> n;
    int arr[n];

    // take input
    for (i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    // method
    for (i = 0; i < n; ++i)
    {
        for (j = i + 1; j < n; ++j)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }

    // print
    for (i = 0; i < n; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}