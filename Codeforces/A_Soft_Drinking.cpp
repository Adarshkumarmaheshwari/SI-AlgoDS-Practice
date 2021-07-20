#include "bits/stdc++.h"
using namespace std;

int main()
{
    int n, k, l, c, d, p, nl, np, drink, slice, salt, ans;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    drink = (k * l) / nl;
    slice = c * d;
    salt = p / np;
    ans = min(drink, min(slice, salt));
    cout << ans / n << endl;
    return 0;
}