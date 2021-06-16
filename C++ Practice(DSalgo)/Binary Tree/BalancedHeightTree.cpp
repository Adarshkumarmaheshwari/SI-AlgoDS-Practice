#include "bits/stdc++.h"
using namespace std;

class node{
    public:
    int data;
    node*left;
    node*right;
    node(int x){
        data=x;
        left=NULL;
        right=NULL;
    }

};
int height(node* root){
    if(root==NULL){
        return 0;
    }
    return max(height(root->right),height(root->left))+1;
}
bool balancedHeightTree(node* root)
{
    if(root==NULL){
        return true;
    }
    if(balancedHeightTree(root->left)==false){
        return false;
    }
    if(balancedHeightTree(root->right)==false){
        return false;
    }
    int lh=height(root->left);
    int rh=height(root->right);
    if(abs(lh-rh)<=1){
        return true;
    }else{
        return false;
    }
    return false;
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
    if(balancedHeightTree(root)){
        cout<<"Balanced"<<endl;
    }else{
        cout<<"Unbalanced<<endl";
    }
    return 0;
}