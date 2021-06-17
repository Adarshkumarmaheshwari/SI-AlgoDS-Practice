#include "bits/stdc++.h"
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;
    node(int x)
    {
        data = x;
        left = NULL;
        right = NULL;
    }
};

bool CheckBST(node *root, node *min=NULL, node *max=NULL)
{
    if(root==NULL){
        return true;
    }
    if (min != NULL && root->data <= min->data)
    { //root data is always greater than min data
        return false;
    }
    if (max != NULL && root->data >= max->data)
    {
        return false;
    }

    bool leftValid = CheckBST(root->left, min, root);//for left subtree max value must be root value
    bool rightValid = CheckBST(root->right, root, max);//for right subtree min value is always root
    return leftValid && rightValid;//if both are true
}

int main()
{
    node* root1=new node(1);
    root1->left=new node(2);
    root1->right=new node(3);
    if(CheckBST(root1,NULL,NULL)){
        cout<<"VALID BST"<<endl;
    }else{
        cout<<"INVALID"<<endl;
    }
}