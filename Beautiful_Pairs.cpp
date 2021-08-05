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
        
        ll n;
        cin >> n;
        int arr[n];

        for (int i{0}; i < n; i++)
        {
            cin >> arr[i];
        }

        map<ll,ll> m;

        for(int x:arr)
        {
            m[x]++;
        }
        ll res=n*(n-1);

        for(auto x:m)
        {
            if(x.second>1)
            {
                res-=(x.second*(x.second-1));
            }
        }
        cout<<res<<endl;
    }
    return 0;
}