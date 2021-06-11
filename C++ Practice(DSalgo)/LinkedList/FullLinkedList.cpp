#include<iostream>
using namespace std;

class node{
    int data;
    node* next;
    node(int val){
        data=val;
        next=NULL;
    }
};

void insertAtTail(node* &head, int val)
{
    node* n = new node(val);
    if(head==NULL){
        head=n;
        return;
    }
    node* temp =head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}

void insertAtHead(node* &head, int val)
{
    node* n = new node(val);
    n->next=head;//pointing to first node
    head=n; //now n is the head
}

void display(node* head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

bool search(node* head, int val)
{
    node* temp =head;
    while(temp!=NULL)
    {
        if(temp->data==val){
            return true;
        }
        temp=temp->next;
    }
    return false;
}
void deleteAtHead(node* &head)
{
    node*temp=head;
    node* atHead = temp;
    temp=temp->next;
    delete atHead;
}
void deleteNode(node* &head, int key)
{
    if(head==NULL)
    {
        return;
    }
    if(head->next==NULL){
        deleteAtHead(head);
        return;
    }
    node* temp =head;
    while(temp->next->data!=key)
    {
        temp=temp->next;
    }
    node* toBeNode = temp->next;
    temp->next=temp->next->next;
    delete toBeNode;
}

void reverseLL(node* &head)
{
    node* currptr=head;
    node* prevptr=NULL;
    node* nextptr;
    while(currptr!=NULL)
    {
        nextptr=currptr->next;
        currptr->next=prevptr;
        currptr=nextptr;
        prevptr=currptr;
    }
    return prevptr;    
}

void reversek(node* &head, int k)
{
    node* currptr=head;
    node* prevptr=NULL;
    node* nextptr;
    int count=0;
    while(currptr!=NULL && count<k)
    {
        nextptr=currptr->next;
        currptr->next=prevptr;
        currptr=nextptr;
        prevptr=currptr;
        count++;
    } 
    if(nextptr!=NULL)
    {
        head->next = reversek(nextptr, k);
    }
    return prevptr;
}

int main()
{

}