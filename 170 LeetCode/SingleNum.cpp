#include "bits/stdc++.h"
using namespace std;

int singleNum(int arr[],int n)
{
    int ans=0;
    for(int i{0}; i<n; i++){
        ans^=arr[i];
    }
    return ans;

}
int singleNumMethod2(int arr[], int n)
{
    int ans;
    map<int, int> m;
    for(int i{0}; i<n; i++){
        m[arr[i]]++;
    }
    for(int i{0}; i<n; i++){
        if(m[arr[i]]==1){
            ans=arr[i];
        }
    }
    return ans;
}
int main()
{
    int arr[]={2,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<singleNum(arr,n)<<endl;
    cout<<singleNumMethod2(arr,n)<<endl;
    return 0;
}