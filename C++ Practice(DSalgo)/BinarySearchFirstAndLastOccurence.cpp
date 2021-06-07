#include<iostream>
using namespace std;
#include <vector>

int getFirst(int arr[],int target, int n)
{
    int s=0;
    int e=n-1;
    int ans=-1;
    while(s<=e)
    {
        int mid = s + (e-s)/2;
        if(arr[mid]==target){
            ans=mid;
            e=mid-1;
        }else if(arr[mid]<target){
            s=mid+1;
        }else{
            e=mid-1;
        }
    }
    return ans;
}
int getLast(int arr[],int target, int n)
{
    int s=0;
    int e=n-1;
    int ans=-1;
    while(s<=e)
    {
        int mid = s + (e-s)/2;
        if(arr[mid]==target){
            ans=mid;
            s=mid+1;
        }else if(arr[mid]<target){
            s=mid+1;
        }else{
            e=mid-1;
        }
    }
    return ans;
}



int main()
{
    int arr[]={1,2,3,4,5,5,7,8,9};
    int n = 9;
    int target = 5;
    int first = getFirst(arr,target,n);
    vector<int> v(2,-1);
    if(first==-1){
        cout<<"-1"<<endl;
    }
    int last=getLast(arr,target,n);
    v[0]=first;
    v[1]=last;
    for(auto x:v){
        cout<<x<<" ";
    }
    return 0;
}