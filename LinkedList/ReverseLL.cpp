/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode *Solution::reverseList(ListNode *A)
{
    ListNode *p = NULL, *q = NULL, *r = NULL;
    p = A;
    while (p)
    {
        r = q;
        q = p;
        p = p->next;
        q->next = r;
    }
    return q;
}
