#include "bits/stdc++.h"
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin >> n;
    ll v[4][6000];
    int ans;
    int temp[4];
    int k;
    for (int i{1}; i <= n; i++)
    {
        cin >> k;
        v[k][temp[k]++] = i;
    }
    ans = min(temp[1], min(temp[2], temp[3]));

    cout << ans << endl;
    for (int i{0}; i < ans; i++)
    {
        cout << v[1][i] << " " << v[2][i] << " " << v[3][i] << endl;
    }
    return 0;
}
