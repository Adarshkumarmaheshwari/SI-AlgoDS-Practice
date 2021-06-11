#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};

void insertAtTail(node *&head, int val)
{
    node *n = new node(val); //Created new node to insert the value
    if (head == NULL)
    { //if linkedlist is empty just add the value
        head = n;
        return;
    }
    node *temp = head; //tempoarary pointer for tranversing we cannot use head directly because head is take by reference
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}

void InsertAtHead(node *&head, int val)
{
    node *n = new node(val);
    n->next = head; //it is now pointing to first node
    head = n;       //move head to n which is our new first node;
}

//to print the output
void display(node *head)
{
    node *temp = head; //temp node head to traverse the linkedlist
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

bool search(node *head, int key)
{
    node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == key)
            return true;
        else
        {
            temp = temp->next;
        }
    }
    return false;
}

//it will make a cycle
void makeCycle(node *&head, int k)
{
    node *temp = head;
    node *startNode;
    int count = 1;
    while (temp->next != NULL)
    {
        if (count == k)
        {
            startNode = temp;
        }
        temp = temp->next;
        count++;
    }
    temp->next = startNode;
}

bool CycleDetect(node *&head)
{
    node *slow = head;
    node *fast = head;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (fast == slow)
        {
            return true;
        }
    }
    return false;
}

void cycleRemoval(node *&head)
{
    if (head == NULL || head->next == NULL)
        return;
 
    node *slow = head;
    node *fast = head;
 
   
    slow = slow->next; //moving both ahead to avoid both togeather
    fast = fast->next->next;
 
    // Search for loop using slow and
    // fast pointers
    while (fast && fast->next) {
        if (slow == fast)
            break;
        slow = slow->next;
        fast = fast->next->next;
    }
 
    /* If loop exists */
    if (slow == fast)
    {
        slow = head;
           
        // this check is needed when slow
        // and fast both meet at the head of the LL
          // eg: 1->2->3->4->5 and then
        // 5->next = 1 i.e the head of the LL
          if(slow == fast) {
              while(fast->next != slow) fast = fast->next;
        }
          else {
            while (slow->next != fast->next) {
                slow = slow->next;
                fast = fast->next;
            }
        }
 
        /* since fast->next is the looping point */
        fast->next = NULL;
    }
}
int main()
{
    node *head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtTail(head, 5);
    insertAtTail(head, 6);

    // display(head);
    makeCycle(head, 3);
    cout << CycleDetect(head) << endl;
    display(head);
    cycleRemoval(head);
    display(head);

    return 0;
}