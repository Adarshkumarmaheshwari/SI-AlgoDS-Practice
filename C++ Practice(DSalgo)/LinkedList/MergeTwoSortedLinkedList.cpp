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
        InsertAtHead(head, val);
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

node* MergeLL(node*&head1, node*&head2)
{
    node*ptr1=head1;
    node*ptr2=head2;

    node* dummyNode=new node(-1);
    node* ptr3=dummyNode;
    while(ptr1!=NULL && ptr2!=NULL)
    {
        if(ptr1->data<ptr2->data){
            ptr3->next=ptr1;
            ptr1=ptr1->next;
        }else{
            ptr3->next=ptr2;
            ptr2=ptr2->next;
        }
        ptr3=ptr3->next;
    }
    while (ptr1!=NULL)
    {
        ptr3->next=ptr1;
        ptr1=ptr1->next;
        ptr3=ptr3->next;

    }
       while (ptr2!=NULL)
    {
        ptr3->next=ptr2;
        ptr2=ptr2->next;
        ptr3=ptr3->next;
    }
    return dummyNode->next;
}

int main()
{
node* head1=NULL;
insertAtTail(head1, 1);
insertAtTail(head1, 4);
insertAtTail(head1, 5);
insertAtTail(head1, 7);
node* head2=NULL;
insertAtTail(head2,2);
insertAtTail(head2,3);
insertAtTail(head2,6);

display(head1);
display(head2);
node* newhead=MergeLL(head1,head2);
display(newhead);


    return 0;
}