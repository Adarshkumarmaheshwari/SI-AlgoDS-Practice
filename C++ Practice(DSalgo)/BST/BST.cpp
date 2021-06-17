#include "bits/stdc++.h"
using namespace std;

 //implementation of  Binary tree

 class node{
     public:
     int data;
     node* left;
     node* right;
     node(int x){
         data=x;
         left=NULL;
         right=NULL;
     }
 };

node* insertBST(node* root, int v){
    if(root==NULL){
        return new node(v);
    }
    if(v<root->data){
        root->left=insertBST(root->left,v);
    }else{
        root->right=insertBST(root->right,v);
    }
    return root;
}

void inorder(node* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data;
    inorder(root->right);
}
int main()
{
    node* root=NULL;
    root =insertBST(root, 5);
    insertBST(root,1);
    insertBST(root,3);
    insertBST(root,4);
    insertBST(root,6);
    insertBST(root,2);
    insertBST(root,9);
    inorder(root);

 return 0;
}