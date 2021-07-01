#include "bits/stdc++.h"
using namespace std;

int ClimbStair(int n)
{
    int *arr= new int[n+2];
    arr[0]=0;
    arr[1]=1;
    if(n==1){
        return 1;
    }else if(n==2){
        return 2;
    }else if(n==3){
        return 3;
    }
    for(int i{2}; i<=n; i++){
        arr[i]=arr[i-2]+arr[i-1];
    }
    return arr[n];
}

int main()
{
    int n;
    cin>>n;
    cout<<ClimbStair(n);
    return 0;
}