#include "bits/stdc++.h"
using namespace std;
//Diameter is number of node in the longest path between any 2 leaves
class node
{
public:
    int data;
    node *left;
    node *right;
    node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

int calcHeight(node* root)
{
    if(root==NULL){
        return 0;
    }
    
    return max(calcHeight(root->left),calcHeight(root->right))+1;
    
}

int CalcDiameter(node* root)
{
    if(root==NULL){
        return 0;
    }
    int lHeight = calcHeight(root->left);
    int rheight = calcHeight(root->right);
    int currDiameter=lHeight+rheight+1;

    int lDiameter = CalcDiameter(root->left);
    int rDiameter = CalcDiameter(root->right);

    return max(currDiameter, max(lDiameter,rDiameter));
}

int main()
{
    node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->right->left = new node(6);
    root->right->right = new node(7);
    root->left->left = new node(4);
    root->left->right = new node(5);
    cout<<CalcDiameter(root);
}