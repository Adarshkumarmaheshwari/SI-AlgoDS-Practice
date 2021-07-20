#include "bits/stdc++.h"
using namespace std;
#define ll long long

int main()
{
    ll x, y;
    cin >> x >> y;
    if (x % 2 != 0)
        x++;

    if (x + 2 > y)
        cout << "-1" << endl;
    else
        cout << x << " " << x + 1 << " " << y + 2 << endl;

    return 0;
}