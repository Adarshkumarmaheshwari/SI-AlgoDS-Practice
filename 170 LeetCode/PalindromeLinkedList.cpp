#include "bits/stdc++.h"
using namespace std;


 struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
 };

 
class Solution {
public:
//    ListNode* temp;
//     bool isPalindrome(ListNode* head) {
        
//         temp=head;
//         return check(head);
//     }
//     bool check(ListNode* i)
//     {
//         ios_base::sync_with_stdio(false);
//         cin.tie(NULL);
        
//         if(i==NULL)return true;
        
//         bool palCheck = check(i->next)&&(temp->val==i->val);
        
//         temp=temp->next;
        
//         return palCheck;
//     }
    
    bool isPalindrome(ListNode* head)
    {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        stack<ListNode*> s;
        ListNode* temp=head;
        
        while(temp)
        {
            s.push(temp);
            temp=temp->next;
        }
        ListNode* newTemp=head;
        while(newTemp)
        {
            if(newTemp->val == s.top()->val){
                s.pop();
                newTemp=newTemp->next;
            }else{
                return false;
            }
        }
        return true;
    }
};