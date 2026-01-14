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
    ListNode* middleNode(ListNode* head) {
        struct ListNode* curr = head;
        struct ListNode* middle = nullptr;
        int nb = 0;
        int pos;

       
        while (curr != NULL) {
            nb++;
            curr = curr->next;
        }

        if (nb % 2 == 0) {
            pos = (nb / 2) + 1;
        } else {
            pos = (nb / 2) + (nb % 2);
        }

     
        int findPos = 0;
        curr = head; 
        while (curr != NULL) {
            findPos++;
            if (findPos == pos) {
                middle = curr;
            
            }
            curr = curr->next;
        }
        return middle;
    }
};