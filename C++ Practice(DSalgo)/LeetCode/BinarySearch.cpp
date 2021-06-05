#include<iostream>
using namespace std;
int binarySearch(int arr[],int s, int e,int key)
{
    int mid=s+(e-s)/2;
    while(s<=e)
    {
        if(key==arr[mid]){
            return mid;
        }
        else if(key<arr[mid]){
            e=mid-1;
        }
        else {
            s=mid+1;
        }
    }
    return -1;
}

int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9};
    int s=0;
    int e=9;
    int key=5;
    int ans=binarySearch(arr,s,e,key);
    if (ans==-1){
        cout<<"Key not found"<<endl;
    }
    else{
        cout<<"Key found at index "<<ans<<endl;
    }
    return 0;
}