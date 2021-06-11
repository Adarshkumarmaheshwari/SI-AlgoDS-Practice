#include<iostream>
using namespace std;
 class node{
     public:
     int data;
     node* next;
     node(int v){
        data=v;
        next=NULL;
     }
 };

void addAtHead(node* &head, int val)
{
    node* n = new node(val);
    n->next=head;//pointing to first node
    head=n; //now n is the head
}
 void insertAtTail(node*&head, int val)
 {
     
    node* n=new node(val);
    if(head==NULL){
        addAtHead(head, val);
        return;
    }
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
 }
void display(node* head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void intersect (node*&head1, node*&head2, int pos){
    node* temp1=head1;
    pos--;
    while(pos--){
        temp1=temp1->next;
    }
    node* temp2=head2;
    while(temp2->next!=NULL){
        temp2=temp2->next;
    }
    temp2->next=temp1;
}
int lengthLL(node*head){
    node*temp=head;
    int count{0};
    while(temp!=NULL)
    {
        temp=temp->next;
        count++;
    }
    return count;
}
int intersectionPoint(node*&head1, node*&head2)
{
    node*ptr1;
    node*ptr2;
    int l1=lengthLL(head1);
    int l2=lengthLL(head2);
    int d=0;
    if(l1>l2){
        d=l1-l2;
        ptr1=head1;
        ptr2=head2;
    }else{
        d=l2-l1;
        ptr1=head2;
        ptr2=head1;
    }
    while(d){

        ptr1=ptr1->next;
        if(ptr1==NULL){
            return -1;
        }
        d--;
    }
    while(ptr1!=NULL&&ptr2!=NULL){
        if(ptr1==ptr2){
            return ptr1->data;
        }
        ptr1=ptr1->next;
        ptr2=ptr2->next;
    }
    return -1;
}


int main()
{
node* head1=NULL;
node* head2=NULL;

    for(int i{1}; i<=6; i++){
        insertAtTail(head1, i);
    }
        insertAtTail(head2, 9);
        insertAtTail(head2, 10);
        insertAtTail(head2, 5);
        insertAtTail(head2, 6);

    
    display(head1);
    display(head2);
    intersect(head1,head2,3);
    cout<<intersectionPoint(head1,head2)<<endl;
   
    return 0;
}