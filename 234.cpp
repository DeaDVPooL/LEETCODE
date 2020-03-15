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
    ListNode* halfEnd(ListNode* head)
    {
        ListNode *slow,*fast;
        slow = head;
        fast = head;
        while(fast->next!=NULL&&fast->next->next!=NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
    ListNode* reverseList(ListNode* head)
    {
        ListNode* prev = NULL;
        ListNode* p = head;
        while(p!=NULL)
        {
            ListNode* tmp = p->next;
            p->next = prev;
            prev = p;
            p = tmp;
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
        if(head==NULL)  return true;
        ListNode* p1 = halfEnd(head);
        ListNode* p2 = reverseList(p1->next);
        ListNode* p = head;
        bool result = true;
         while (result && p2 != NULL) {
            if (p->val != p2->val) result = false;
            p = p->next;
            p2 = p2->next;
        }        
        return result;
    }
};
