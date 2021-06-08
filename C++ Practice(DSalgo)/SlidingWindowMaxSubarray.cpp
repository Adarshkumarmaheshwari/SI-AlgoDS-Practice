#include<bits/stdc++.h>
using namespace std;

int MaxSubArray(int arr[], int k, int n)
{
    int j{0};
    int i{0};
    int sum{0};
    int maxNum=INT_MIN;
    if(n<k){
        return -1;
    }
    while(j<n)
    {
        sum+=arr[j];
        if(j-i+1<k){
            j++;
        }
        else if(j-i+1==k){
            if(sum>maxNum){
            maxNum=max(maxNum,sum);
            }
             sum=sum-arr[i];
            j++;
            i++;
        }
       
    }
    return maxNum;
}

int main()
{
    int arr[]={1,2,3,4,1,6,4,8,3};
    int n=9;
    int k=3;
    cout<<MaxSubArray(arr,k,n);
    return 0;
}