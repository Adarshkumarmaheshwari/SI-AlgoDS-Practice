#include "bits/stdc++.h"
using namespace std;

 struct TreeNode {
     int val;
     TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };
class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        if (root==NULL)return false;
        int sum;
        bool ans{0};
        sum=targetSum-root->val;
        if(sum==0 && root->left==NULL && root->right==NULL) return true;
        if(root->left)
            ans=ans || hasPathSum(root->left,sum);
        if(root->right)
            ans = ans || hasPathSum(root->right, sum);
        return ans;
    }
};