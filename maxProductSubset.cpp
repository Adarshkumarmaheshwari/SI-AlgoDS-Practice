#include "bits/stdc++.h"
using namespace std;


void solve(int a[], int n)
{

    int negativeCount=0;
    int maxNeg=INT_MIN;
    int Zeros=0;
    int prod=1;

    for(int i{0}; i<n; i++)
    {
        if(a[i]==0)Zeros++;
        if(a[i]<0)
        {
            negativeCount++;
            maxNeg=max(maxNeg,a[i]);
        }
        prod*=a[i];
    }
    if(negativeCount==n) 
    {
        cout<<"0"<<endl;
        return;
    }else if(negativeCount==1 && negativeCount+Zeros==n)
    {
        cout<<"0"<<endl;
        return;
    }
    else if(negativeCount&1)
    {
        prod=prod/maxNeg;
    }
    cout<<prod<<endl;
    
}

int main()
{
    int a[]={-1, -1, -2, 4, 3};
    int n=sizeof(a)/sizeof(a[0]);
    solve(a,n);
    return 0;
}