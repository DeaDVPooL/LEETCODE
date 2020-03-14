/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* n = NULL;
        ListNode* p = head;
       while(p!=NULL)
       {
            ListNode* tmp = p->next;
            p->next = n;
            n = p;
            p = tmp;
       }
        return n;
    }
};
