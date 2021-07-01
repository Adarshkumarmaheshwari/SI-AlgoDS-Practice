#include "bits/stdc++.h"
using namespace std;


int MissingNum(int arr[], int n)
{
 sort(arr, arr+n);
 for(int i{0}; i<n;i++){
     if(arr[i]!=i){
        return i;
        break;
     }
 }
    return n;
}
int MissingNumMethod2(int arr[], int n)
{
    int sum=0;
    int count=1;
    for(int i{0}; i<n; i++)
    {
        sum+=arr[i];
        count++;
    }
    return count-sum;
}
int MissingNumMethod3(int arr[], int n)
{
    int ans=n;
    for(int i{0}; i<n;i++)
    {
        ans^=i^arr[i];
    }
    return ans;
}

int main()
{
    int arr[]={0,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<MissingNum(arr,n)<<endl;
    cout<<MissingNumMethod2(arr,n)<<endl;
    cout<<MissingNumMethod3(arr,n);
    return 0;
}