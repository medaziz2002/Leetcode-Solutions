/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int getDecimalValue(ListNode* head) {

     struct ListNode* curr = head;
     int bit=0;
     int nb=-1;
     while(curr!=NULL)
     {
       nb++;
       curr=curr->next;
     }
     curr=head;
       while(curr!=NULL)
     {
    
        bit=bit+curr->val*pow(2,nb);
        nb--;
       
       curr=curr->next;
     }
     return bit;
     


        
    }
};