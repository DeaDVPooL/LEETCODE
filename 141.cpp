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
    bool hasCycle(ListNode *head) {
        ListNode* fast = head;
        while(head!=NULL&&fast!=NULL)
        {
            head = head->next;
            if(fast->next==NULL)  return false;
            fast = fast->next->next;
            if(fast==head)  return true;

        }
        return false;
    }
};
