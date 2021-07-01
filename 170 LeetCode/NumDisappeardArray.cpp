#include "bits/stdc++.h"
using namespace std;

//Logic: Numbers which are missing (not reachable )their index will be positive so we will print their index.

void numDisappered(int arr[], int n)
{
    vector<int> ans;
    for(int i{0}; i<n; i++)
    {
        int a=abs(arr[i])-1;
        if(arr[a]>0){
            arr[a]=-arr[a];
        }
    }
    for(int i{0}; i<n; i++){
        if(arr[i]>0){
            ans.push_back(i+1);
        }
    }
    for(auto x:ans){
        cout<<x<<" ";
    }
}


int main()
{
    int arr[]={4,3,2,7,8,2,3,1};
    int n= sizeof(arr)/sizeof(arr[0]);
    numDisappered(arr,n);
    
    return 0;
}
