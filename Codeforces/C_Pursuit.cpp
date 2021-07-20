#include "bits/stdc++.h"
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x;
        cin>>x;
        int arr1[x];
        for(int i{0}; i<x; i++)
        {
            cin>>arr1[i];
        }
        int y;
        cin>>y;
        int arr2[y];
        for(int i{0}; i<y; i++)
        {
            cin>>arr2[i];
        }
        int temp1{0};
        int temp2=0;
        sort(arr1,arr1+x, greater<int>());
        sort(arr2,arr2+y, greater<int>());
        int n=t-floor(t/4);
        for(int i{0}; i<n; i++)
        {
            temp1+=arr1[i];
            temp2+=arr2[i];
        }
       if(temp1>temp2)cout<<'0'<<endl;
       else if(temp2>temp1)
       {
           cout<<(temp2+temp1)/100<<endl;
       }

    }
    return 0;
}