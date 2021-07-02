#include "bits/stdc++.h"
using namespace std;


 struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
 };
 ListNode* reverseList(ListNode* head) {
        ListNode* curPtr=head;
        ListNode* prevPtr=NULL;
        ListNode* nextPtr;
        while(curPtr!=NULL)
        {
            nextPtr = curPtr->next;
            curPtr->next=prevPtr;
            
            prevPtr = curPtr;
            curPtr=nextPtr;
        }
        return prevPtr;
    }