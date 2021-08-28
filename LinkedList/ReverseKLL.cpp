ListNode *Solution::reverseList(ListNode *A, int B)
{
    ListNode *p = A, *q = NULL, *r = NULL;
    int cnt = 0;
    while (p and cnt < B)
    {
        r = q;
        q = p;
        p = p->next;
        q->next = r;
        cnt++;
    }
    if (p)
    {
        A->next = reverseList(p, B);
    }
    return q;
}