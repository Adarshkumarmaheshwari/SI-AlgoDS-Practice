#include "bits/stdc++.h"
using namespace std;

int containDuplicate(int arr[], int n)
{
    unordered_map<int, bool> m;
    for(int i{0}; i<n; i++)
    {
        if(m[arr[i]]==0){
            m[arr[i]]=true;
        }else{
            return true;
            break;
        }
    }
    return false;
}


int main()
{
    int arr[]={1,1,1,3,3,4,3,2,4,2};
    int n= sizeof(arr)/sizeof(arr[0]);
    if(containDuplicate(arr,n)){
        cout<<"True"<<endl;
    }else{
        cout<<"False"<<endl;
    }
    return 0;
}