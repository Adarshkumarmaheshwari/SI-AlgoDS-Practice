#include "bits/stdc++.h"
using namespace std;



int main()
{
    int m,n;
    cin>>m>>n;
    int *arr = new int[m];
    for(int i{0}; i<m; i++)
    {
        cin>>arr[i];
    }

    sort(arr,arr+m);
    int minVal=arr[n-1]-arr[0];
    for(int i{0}; i<m-n; i++){
        minVal = min(minVal, abs(arr[i+n-1]-arr[i]));
    }
    cout<<minVal<<endl;
    return 0;
}