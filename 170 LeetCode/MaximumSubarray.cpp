#include "bits/stdc++.h"
using namespace std;

//kadane algorithm

int findMaximumSubarray(int nums[], int n)
{
    int maxSoFar = INT_MIN;
    int maxEndHere = 0;

    for(int i{0}; i<n; i++){
        maxEndHere+=nums[i];
        if(maxSoFar<maxEndHere)
        {
            maxSoFar=maxEndHere;
        }
        if(maxEndHere<0){
            maxEndHere=0;
        }
    }
    return maxSoFar;
}

int main()
{
 int nums[]={-2,1,-3,4,-1,2,1,-5,4};
 int n=sizeof(nums)/sizeof(nums[0]);

 cout<<findMaximumSubarray(nums, n);
    return 0;
}