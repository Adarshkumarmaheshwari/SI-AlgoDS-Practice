#include "bits/stdc++.h"
using namespace std;

int main()
{
    int n,k;
    cin >>n>>k;
    int f,t;
    int temp;
    int ans{INT_MIN};
    for(int i{0}; i<n; i++)
    {
        cin>>f>>t;
        if(t>k)
        {
            temp=f-(t-k);
        }else{
            temp=f;
        }
        ans=max(ans,temp);
    }
    cout<<ans<<endl;
    return 0;
}