#include "bits/stdc++.h"
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll k;
        cin >> k;
        ll res = 0;

        if (k <= 6)
            res = 15;
        else
        {
            if (k & 1)
                k++;
            res = (k * 5) / 2;
        }

        cout << res << endl;
    }

    return 0;
}