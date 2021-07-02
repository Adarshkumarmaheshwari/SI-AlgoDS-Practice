#include "bits/stdc++.h"
using namespace std;


 struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
 };

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     ListNode* temp =head;
        
    if(temp==NULL)return head;
    while(temp->next!=NULL)
    {
        if(temp->val == temp->next->val){
            temp->next=temp->next->next;
        }else{
            temp=temp->next;
        }
    }
        return head;
    }
};