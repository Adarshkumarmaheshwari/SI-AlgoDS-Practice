#include "bits/stdc++.h"
using namespace std;

vector<int> Duplicate(vector<int>&nums)
{
    vector<int>ans;
    for(int i{0}; i<nums.size(); i++)
    {
        int temp=abs(nums[i]);
        if(nums[temp-1]<0)
        {
            ans.push_back(temp);
        }else{
            nums[temp-1]=-nums[temp-1];
        }
    }
    return ans;
}

int main()
{
    

    return 0;
}