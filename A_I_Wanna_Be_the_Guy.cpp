#include "bits/stdc++.h"
using namespace std;

int main()
{
    int n;
    cin >> n;
    int j;
    cin >> j;
    int *arr = new int[n * 2];
    for (int i{0}; i < j; i++)
    {
        cin >> arr[i];
    }
    int m;
    cin >> m;
    for (int i{j}; i < m+j; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + j + m);
    int count{0};

    for (int i{0}; i < j + m; i++)
    {
        if (arr[i] != arr[i + 1])
            count++;
    }

    if (count == n)
        cout << "I become the guy." << endl;
    else
        cout << "Oh, my keyboard!" << endl;
    return 0;
}