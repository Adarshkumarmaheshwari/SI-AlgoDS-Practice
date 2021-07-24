#include "bits/stdc++.h"
using namespace std;

int main()
{
    int y,k,n;
    cin>>y>>k>>n;
    int x=0;
    int ans{0};
    ans=k - y%k;

    if(ans>n-y)
    {
        cout<<"-1"<<endl;
        return 0;
    }
  

    while(ans+y<=n)
    {
        cout<<ans<<" ";
        ans+=k;
    }

    return 0;
}