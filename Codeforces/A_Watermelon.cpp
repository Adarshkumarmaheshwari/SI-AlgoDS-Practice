#include "bits/stdc++.h"
using namespace std;

bool solve(int n)
{
    if(n==2)return false;
    if(n&1){
        return false;
    }else{
        return true;
    }
    return false;
}


int main()
{
    int n;
    cin>>n;
    if(solve(n)){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    return 0;
}