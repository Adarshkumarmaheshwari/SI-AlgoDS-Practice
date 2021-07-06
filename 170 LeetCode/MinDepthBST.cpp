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
    #define k 10000
    int minDepth(TreeNode* root) {
        if(root==NULL)return 0;
        if (root->left == NULL && root->right == NULL)
        return 1;
        int l = k, r = k;
        
        if(root->left)
        l=minDepth(root->left);
        
        if(root->right)
        r=minDepth(root->right);
        
        return min(l,r)+1;
    }
};