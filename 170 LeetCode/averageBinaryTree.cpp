#include "bits/stdc++.h"
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

vector<double> FindAverage(TreeNode *root)
{
    queue<TreeNode *> q;
    vector<double> ans;
    q.push(root);
    while (!q.empty())
    {
        int n = q.size();
        double sum = 0;
        TreeNode *node = q.front();
        for (int i{0}; i < n; i++)
        {
            if (node->left != NULL)
                q.push(node->left);
            if (node->right != NULL)
                q.push(node->right);
            sum += node->val;
            q.pop();
        }
        ans.push_back(sum / n);
    }
    return ans;
}

int main()
{

    return 0;
}