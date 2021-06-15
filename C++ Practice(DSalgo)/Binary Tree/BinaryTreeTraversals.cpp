#include "bits/stdc++.h"
using namespace std;
/*
PREORDER TRAVERSAL
=>Start from root and traverse left side of tree than comeback to root and traverse right side
INORDER TRAVERSAL
=> Donot add root but traverse left and reach end of node and add it than come back and add root
=> We cannot add root until we traverse left subtree
POSTORDER Traversal
=> Before traversing root we will traverse left subtree and right subtree

*/

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

void preorder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " "; //preorder says we have to print root first
    preorder(root->left);
    preorder(root->right);
}
void inorder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
void postorder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
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
    cout << endl;
    cout << "Preorder"
         << "\n";
    preorder(root);
    cout << endl;
    cout << "Inorder" << endl;

    inorder(root);
    cout << endl;
    cout << "Postorder" << endl;
    postorder(root);

    return 0;
}