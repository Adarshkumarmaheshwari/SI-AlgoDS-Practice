#include "bits/stdc++.h"
using namespace std;

void SortArray(int arr[], int n)
{
    int low{0};
    int high{n-1};
    int mid={0};

    for(int i{0}; i<n; i++){
        switch (arr[mid]) 
        {
        case 0:
           swap(arr[mid++], arr[low++]);
            break;
        case 1:
            mid++;
            break;
        case 2:
            swap(arr[mid++], arr[high--]);
            break;
        
        default:
            break;
        }
    }
   
}

int main()
{
    int arr[]={0,2,1,2,1,1,2,0};
    int n=7;
    SortArray(arr,n);
    for(auto x:arr){
        cout<<x<<" ";
    }

    return 0;
}