#include "bits/stdc++.h"
using namespace std;

/*
We will solve this using queue
LOGIC
Null is used to check if first level is end and second is started.

------------------------------
Explaination
=> Suppose our binary tree is -> 1,2,3,4,5
We will push 1 which is root ot queue and than push NULL
-> We will store root to variable and pop it from queue and start a loop
to check if it has right and left subtree if it has than we will push the values

*/
class node
{
public:
    int data;
    node *left;
    node *right;
    node(int v)
    {
        data = v;
        left = NULL;
        right = NULL;
    }
};

void printLevelOrder(node *root)
{
    if (root == NULL)
    { //checking that root is NULL
        return;
    }
    queue<node *> q;
    q.push(root); //pushing root
    q.push(NULL); //then NULL

    while (!q.empty())
    {                        //until queue is empty
        node *n = q.front(); //what ever is in front of a queue
        q.pop();
        if (n != NULL)
        { //if it is not NULL we will print the data and check left and right subtree
            cout << n->data << " ";
            if (n->left)
            {
                q.push(n->left);
            }
            if (n->right)
            {
                q.push(n->right);
            }
        }
        else if (!q.empty())
        {
            q.push(NULL);
        }
    }
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
    printLevelOrder(root);
    return 0;
}