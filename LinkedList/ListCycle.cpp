ListNode *Solution::detectCycle(ListNode *A)
{
    ListNode *f = A, *s = A;
    int flag = 0;
    while (f && s && f->next)
    {
        s = s->next;
        f = f->next->next;
        if (s == f)
        {
            flag = 1;
            break;
        }
    }
    if (!flag)
        return NULL;
    s = A;
    while (s != f)
    {
        s = s->next;
        f = f->next;
    }
    return s;
}
