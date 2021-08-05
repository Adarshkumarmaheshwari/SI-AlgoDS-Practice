#include "bits/stdc++.h"
using namespace std;
#define ll long long


void solve(ll n, ll m)
{
    double l=1;
    double r=m;
    double eps=1e-6;
    while((r-l) > eps)
    {
        double mid = (l+r)/2.0;
        if(pow(mid,n)>m)
        {
            r=mid;
        }
        else
        {
            l=mid;
        } 
    }
    cout<<l<<endl;
    cout<<pow(m,(double)(1.0/(double)n));
}
int main()
{
    ll n,m;
    cin>>n>>m;
    solve(n,m);

    return 0;
}