#include "bits/stdc++.h"
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;

        ll c1 = n / 3;
        ll c2 = c1;
        if (c1 + (2 * c2) != n)
        {
            if(c1+1 + c2*2==n)c1++;
            else if(c1+(c2+1)*2==n)c2++;
        }
        cout << c1 << " " << c2 << endl;
    }
    return 0;
}