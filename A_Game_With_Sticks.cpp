#include "bits/stdc++.h"
using namespace std;

int main()
{
int n, m;
cin>>n>>m;

int ans;
if(n>m){
    ans=m;
}else{
    ans=n;
}
if(ans%2==0) cout<<"Malvika"<<endl;
else{
    cout<<"Akshat"<<endl;
}
    return 0;
}