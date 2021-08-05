#include "bits/stdc++.h"
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        double a, b, x;
        cin >> a >> b;
        int ans = 0;
        if (a == b)
            ans = 0;
        else if (a > b)
            ans = ceil((b - (a - 1)) / 2) + ceil(((a - 1) - a) / 2);

        else
            ans = ceil((b - (b - 1)) / 2) + ceil(((b - 1) - a) / 2);

        cout << ans << endl;
    }
    return 0;
}