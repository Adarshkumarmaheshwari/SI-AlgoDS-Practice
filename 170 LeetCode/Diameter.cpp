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
    int heightOfTree(TreeNode* root)
    {
        if(root==NULL)
        return 0;
        return 1 + max(heightOfTree(root->right),heightOfTree(root->left));
    }
    
    int diameterOfBinaryTree(TreeNode* root) {
        if(root==NULL)return 0;
        
       int Leftheight=heightOfTree(root->left);
       int Rightheight=heightOfTree(root->right);
        
        int rightDiameter=diameterOfBinaryTree(root->right);
        int leftDiameter=diameterOfBinaryTree(root->left);
        
        int dia =  max(rightDiameter,leftDiameter);
        int hei= Leftheight+Rightheight;
        return max(hei,dia);
    }
};