int Solution::lPalin(ListNode *A)
{
    int len = length(A);
    if (len == 1)
        return 1;
    ListNode *f = A, *s = A;
    while (f && f->next && f->next->next)
    {
        s = s->next;
        f = f->next->next;
    }
    ListNode *p = s->next, *r = NULL, *q = NULL;
    while (p)
    {
        r = q;
        q = p;
        p = p->next;
        q->next = r;
    }
    s->next = q;
    s = s->next;
    p = A;

    while (s)
    {
        if (s->val == p->val)
        {
            s = s->next;
            p = p->next;
        }
        else
        {
            return 0;
        }
    }
    return 1;
}
