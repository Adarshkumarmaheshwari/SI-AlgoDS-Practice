#include "bits/stdc++.h"
using namespace std;


 struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
 };

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
//         ListNode* temp=head;
        
//         int count=1;
//         while(temp->next!=NULL){
//             temp=temp->next;
//             count++;
//         }
//         int mid=count/2;
        
//         int nCount=0;
//         ListNode* temp2=head;
//         while(temp2->next!=NULL){
//             temp2=temp2->next;
//             nCount++;
//             if(nCount==mid){
//                 break;
//             }
//         }
//         return temp2;
        
        
        ListNode* fast=head;
        ListNode* slow=head;
        
        while(fast!=NULL && fast->next!=NULL)
        {
            fast=fast->next->next;
            slow=slow->next;
        }
        return slow;
    }
};