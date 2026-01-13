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

ListNode* reverseList(ListNode* head) {

    struct ListNode* curr = head;
    struct ListNode* prev= nullptr;
    
    while(curr!=NULL)
    {
        ListNode * nextCopy= curr->next;
        curr->next=prev;
        prev=curr;
        curr=nextCopy;
    }
return prev;


}

};
