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
node *inorderSucc(node *root)//finding the left most leaf node for successor
{
    node *curr = root;
    while (curr && curr->left != NULL)
    {
        curr = curr->left;
    }
    return curr;
}
//Delete BST

node *DeleteBST(node *root, int key)
{
    if (key < root->data)
    {
        root->left = DeleteBST(root->left, key);
    }
    else if (key > root->data)
    {
        root->right = DeleteBST(root->right, key);
    }
    else
    {
        //one child case
        if (root->left == NULL)
        {
            node *temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL)
        {
            node *temp = root->left;
            free(root);
            return temp;
        }
        //case 3
        //two child case
        node *temp = inorderSucc(root->right);           //finding the successor t
        root->data = temp->data;                         //stored right node to current root node
        root->right = DeleteBST(root->right, temp->data); //deleted right node
    }
    return root;
}

node *SearchBST(node *root, int key)
{
    if (root == NULL)
    {
        return NULL;
    }
    if (root->data == key)
    {
        return root;
    }
    if (root->data > key)
    {
        return SearchBST(root->left, key);
    }
    return SearchBST(root->right, key);
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
    node *root = new node(4);
    root->left = new node(2);
    root->right = new node(5);
    root->left->left = new node(1);
    root->left->right = new node(3);
    root->right->right = new node(6);
    if (SearchBST(root, 6) == NULL)
    {
        cout << "Key doesn't exist" << endl;
    }
    else
    {
        cout << "Key exist" << endl;
    }
    inorder(root);
    root=DeleteBST(root,5);
    cout<<endl;
    inorder(root);
    return 0;
}