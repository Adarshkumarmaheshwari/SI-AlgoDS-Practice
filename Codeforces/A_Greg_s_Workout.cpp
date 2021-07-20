#include "bits/stdc++.h"
using namespace std;

int main()
{
    int n;
    cin >> n;
    int *arr = new int[n]{0};
    int x;
    int j = 0;
    for (int i{0}; i < n; i++)
    {
        cin >> x;
        arr[j]+=x;
        ++j;
        if (j == 3)
            j = 0;
    }
    int ans{INT_MIN};
    int index = 0;
    for (int i{0}; i < n; i++)
    {
        if (arr[i] > ans)
        {
            ans = arr[i];
            index = i;
        }
    }
    if (index == 0)
        cout << "chest" << endl;
    else if (index == 1)
        cout << "biceps" << endl;
    else
    {
        cout << "back" << endl;
    }

    return 0;
}