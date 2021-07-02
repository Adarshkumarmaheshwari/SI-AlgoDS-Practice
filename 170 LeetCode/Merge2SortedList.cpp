#include "bits/stdc++.h"
using namespace std;


 struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
 };
 
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* temp1=l1;
        ListNode* temp2=l2;
        ListNode* answer = new ListNode(0);
        ListNode* ans=answer;
        
        while(temp1!=NULL&& temp2!=NULL)
        {
            if(temp1->val > temp2->val)
            {
                ans->next=temp2;
                temp2=temp2->next;
            }
            else
            {
                ans->next=temp1;
                temp1=temp1->next;
            }
            ans=ans->next;
        }
        if(temp1==NULL){
            ans->next=temp2;
        }else{
            ans->next=temp1;
        }
        return answer->next;
    }
};