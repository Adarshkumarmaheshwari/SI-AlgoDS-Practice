#include "bits/stdc++.h"
using namespace std;
#define ll long long

void solve(ll p)
{
    if (p % 2 != 0)
        p -= 1;
    cout << 2 << " " << p << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll p;
        cin >> p;
        solve(p);
    }

    return 0;
}