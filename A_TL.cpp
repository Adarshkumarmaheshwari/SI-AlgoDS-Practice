#include "bits/stdc++.h"
using namespace std;

int main()
{
    int n, m, x;
    cin >> n;
    cin >> m;

    int min = INT_MAX;
    int max1 = INT_MIN;
    for (int i{0}; i < n; i++)
    {
        cin >> x;
        if (x > max1)
            max1 = x;
        if (x < min)
            min = x;
    }
    int ans{0};
    if (min * 2 < max1)
        ans = max1;
    else
    {
        ans = min * 2;
    }

    int k;
    int min1 = INT_MAX;
    for (int i{0}; i < m; i++)
    {
        cin >> k;
        if (k < min1)
            min1 = k;
    }

    if (ans < min1)
        cout << ans << endl;
    else
    {
        cout << "-1" << endl;
    }
    return 0;
}