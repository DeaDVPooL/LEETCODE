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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL)  return head;
        ListNode* ans = head;
        while(head->next!=NULL)
        {
            if(head->next->val==head->val)  
            {
                ListNode* tmp = head->next;
                head->next = tmp->next;
                tmp->next = NULL;
            }
            else head = head->next;
        }
        return ans;
    }
};
