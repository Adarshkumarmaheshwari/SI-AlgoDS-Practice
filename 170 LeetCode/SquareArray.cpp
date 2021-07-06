#include "bits/stdc++.h"
using namespace std;

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int size=nums.size();
        int 
        
        vector<int> ans(size,0);
        
        int left=0; int right=size-1;
        
        while(left<=right)
        {
            if(abs(nums[left])>abs(nums[right]))
            {
                ans[--size]=pow(nums[left++],2);
            }else{
                ans[--size]=pow(nums[right--],2);
            }
        }
        
        return ans;
    }
};