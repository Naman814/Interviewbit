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
