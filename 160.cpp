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
    int getLength(ListNode* A)
    {
        int len = 0;
        while(A!=NULL)
        {
            len++;
            A = A->next;
        }
        return len;
    }
    ListNode* func(ListNode* A,int movelen)
    {
        while(movelen--)    A = A->next;
        return A;
    }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headB==NULL||headA==NULL)    return NULL;
        int lenA = getLength(headA),lenB = getLength(headB);
        ListNode *p,*q;
        p = headA;
        q = headB;
        if(lenA>lenB)   p = func(headA,lenA-lenB);
        if(lenB>lenA)   q = func(headB,lenB-lenA);
        while(p!=q&&p!=NULL&&q!=NULL)
        {
            p = p->next;
            q = q->next;
        }
        return p;
    }
};
