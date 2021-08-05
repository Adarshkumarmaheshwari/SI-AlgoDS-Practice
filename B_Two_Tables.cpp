#include "bits/stdc++.h"
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll w, h, x1, y1, x2, y2, x3, y3;
        cin >> w >> h >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

        ll w1 = abs(x2 - x1);
        ll h1 = abs(y2 - y1);

        ll ans, chk = 0, answ = INT_MAX, ansh = INT_MAX;

        if (w1 + x3 <= w || h1 + y3 <= h)
        {
            if (w1 + x3 <= w)
            {
                answ = min(x3 - x1, x3 - (w - x2));
                answ = max(answ, chk);
            }

            if (h1 + y3 <= h)
            {
                ansh = min(y3 - y1, y3 - (h - y2));
                ansh = max(ansh, chk);
            }
        }
        else
        {
            ansh = -1;
        }

        ans = min(answ, ansh);

        cout << ans << endl;
    }

    return 0;
}