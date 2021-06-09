#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int val){
        data=val;
        next=NULL;
    }
};

void insertAtTail(node* &head, int val){
    node* n = new node(val); //Created new node to insert the value
    if(head==NULL){ //if linkedlist is empty just add the value
        head=n;
        return;
    }
    node* temp=head; //tempoarary pointer for tranversing we cannot use head directly because head is take by reference
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}

void InsertAtHead(node* &head, int val)
{
    node* n = new node(val);
    n->next=head;//it is now pointing to first node
    head=n; //move head to n which is our new first node;
}

//to print the output
void display(node* head){
    node* temp=head;  //temp node head to traverse the linkedlist
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

bool search(node* head, int key){
    node* temp = head;
    while(temp!=NULL){
        if(temp->data==key)
        return true;
        else{
            temp=temp->next;
        }
    }
    return false;
}
void deleteAtHead(node* &head)
{
    node* todelete=head;
    head=head->next;
    delete todelete;
}
void deleteNode(node* &head, int val)//this function will delete the node but not work incase of first node
{
    if(head==NULL){//if we don't have any node
        return;
    }
    if(head->next==NULL){ //if we have only one node
        deleteAtHead(head);
        return;
    }
    node* temp=head; //temp pointer for traversing
    while(temp->next->data!=val){ //it will run until we in counter our node which we want to delete
        temp=temp->next;
    }
    node* todelete = temp->next; //storing the node which we want to delete
    temp->next=temp->next->next; //changing the pointer to kth + 1 node(we are at kth -1 node and deleting kth node)
    delete todelete;
}

int main()
{
node* head=NULL;
insertAtTail(head, 1);
insertAtTail(head, 2);
insertAtTail(head, 3);
insertAtTail(head, 4);
display(head);
InsertAtHead(head, 5);
display(head);
cout<<search(head,5)<<endl;
deleteNode(head, 4);
display(head);
deleteAtHead(head);
display(head);

    return 0;
}