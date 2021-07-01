#include "bits/stdc++.h"
using namespace std;

void CountBits(int n)
{
    int *ans=new int[n+1];
    ans[0]=0;
    for(int i{1}; i<=n; i++)
    {
        if(i&1){
            ans[i]=ans[i/2]+1;

        }else{
            ans[i]=ans[i/2];
        }
    }
    for(int i{0}; i<=n; i++){
        cout<<ans[i]<<" ";
    }
}

int main()
{
    int n;
    cin>>n;
    CountBits(n);
    return 0;
}