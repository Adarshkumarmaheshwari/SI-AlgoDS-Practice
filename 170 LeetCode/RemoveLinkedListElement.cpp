#include "bits/stdc++.h"
using namespace std;


 struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
 };
 
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        ListNode* temp=head;
        if(temp==NULL){
            return NULL;
        }
         
        while(temp->next!=NULL){
            if(temp->next->val==val){
                temp->next=temp->next->next;
            }else{
            temp=temp->next;
            }
        }
        if(head->val == val)   
         {
            head = head->next;
        }
        return head;
    }
};