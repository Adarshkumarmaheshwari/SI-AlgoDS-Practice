#include "bits/stdc++.h"
using namespace std;
#define ll long long
int main()
{
    ll x, y, k;
    cin >> x >> y;
    int min{0};
    for (ll i{0}; i < x; i++)
    {
        cin >> k;
        min += k;
    }
    x = x - 1;
    if (y < (10 * x) + min)
    {
        cout << "-1" << endl;
    }
    else
    {
        cout << (y - min) / 5 << endl;
    }
    return 0;
}