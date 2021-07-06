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
    int maxDepth(TreeNode* root) {
       if(root==NULL) return 0;
        if(root->left==NULL&&root->right==NULL) return 1;
        
        int lnode=INT_MIN, rnode=INT_MIN;
        
        if(root->left)
        lnode=maxDepth(root->left);
        
        if(root->right)
        rnode=maxDepth(root->right);
        
        return max(lnode,rnode)+1;
    }
};