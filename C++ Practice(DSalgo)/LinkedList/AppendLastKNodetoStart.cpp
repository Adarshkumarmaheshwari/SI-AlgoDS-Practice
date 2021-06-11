#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int v)
    {
        data=v;
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
void display(node* head)
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int countLength(node* head){
    int count{0};
    node* temp =head;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    return count;
}
node* AppendKth(node* &head, int k)
{
    node* newHead;
    node* newTail;
    node* tail=head;
    int l=countLength(head);
    // k=k%l;
    int count=1;
    while(tail->next!=NULL){
        if(count==l-k){
            newTail=tail;
        }
        if(count==l-k+1){
            newHead=tail;
        }
        tail=tail->next;
        count++;
    }
   newTail->next=NULL;
   tail->next=head;

   return newHead;
}
int main()
{
    node* head=NULL;
    for(int i{0}; i<6; i++){
        insertAtTail(head, i);
    }
    display(head);
    node*newHead=AppendKth(head,3);
    display(newHead);

    return 0;
}