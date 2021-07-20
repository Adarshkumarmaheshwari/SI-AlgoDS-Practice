#include "bits/stdc++.h"
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i{0}; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "1"
         << " "
         << "-1" << endl;
    cout << n - 2 << " ";

    for (int i{n - 1}; i >= 1; i--)
    {
        if (arr[i] != 0)
            cout << arr[i] << " ";
    }
    cout << endl;
    cout << "1"
         << " "
         << "0" << endl;

    return 0;
}