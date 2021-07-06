#include "bits/stdc++.h"
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);

        vector<int> ans;
        // for(int i{0}; i<nums.size(); i++)
        // {
        //     for(int j{i+1}; j<nums.size(); j++){
        //         if(nums[i]+nums[j]==target){
        //             ans.push_back(i);
        //             ans.push_back(j);
        //         }
        //     }
        // }
        // return ans;
        
        unordered_map<int,int> m;
        for(int i{0}; i<nums.size(); i++){
            int search=target-nums[i];
            if(m.find(search)==m.end()){
                m[nums[i]]=i;
            }
            else{
                ans.push_back(m[search]);
                ans.push_back(i);
                return ans;
            }
        }
        return ans;
    }
};