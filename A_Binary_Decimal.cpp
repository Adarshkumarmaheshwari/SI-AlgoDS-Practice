#include "bits/stdc++.h"
using namespace std;
#define ll long long

int power(int n)
{
    int i,a=1;
    for(int i{0}; i<n; i++)
    {
        a*=10;
    }
    return a;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
    ll n;
    cin>>n;
    int x,c{0},binaryDecimal,i,count{0};
    int temp=n;
    int arr[1000]={0};
    while(temp)
    {
        c++;
        temp=temp/10;
    }
    binaryDecimal=power(c-1);
    temp=n;
    while(temp)
    {
        x=temp/binaryDecimal;
        for(i=0;i<x; i++)
        {
            arr[i]+=binaryDecimal;
        }
        temp=temp%binaryDecimal;
        binaryDecimal=binaryDecimal/10;
    }
    for(i=0; i<10; i++)
    {
        if(arr[i]!=0){
        count++;
        }
    }
    cout<<count<<endl;
    }
    return 0;
}