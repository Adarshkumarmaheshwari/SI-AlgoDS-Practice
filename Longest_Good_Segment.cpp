#include "bits/stdc++.h"
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {

        ll n, k, s;
        cin >> n >> k >> s;
        int a1[n];
        for (int i{0}; i < n; i++)
        {
            cin >> a1[i];
        }
        sort(a1,a1+n);
        ll m = k * s;
        int i = 0;
        ll sum = 0;
        int count = 0;
        while (sum <= m)
        {
            sum += a1[i];
            count++;
            i++;
        }
        cout << count << endl;
    }
    return 0;
}