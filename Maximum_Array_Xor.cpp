#include "bits/stdc++.h"
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k, ans;
        cin >> n >> k;
        ll maxShift = pow(2, n - 1);
        ll totalNum = pow(2, n)-1;
        if (k > maxShift)
        {
            ans = 2 * totalNum * maxShift;
        }
        else
        {
            ans = 2 * totalNum * k;
        }
        cout << ans << endl;
    }

    return 0;
}
