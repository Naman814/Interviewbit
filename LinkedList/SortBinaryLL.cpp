//refer better approach
ListNode *Solution::solve(ListNode *A) 
{
    int x = 0, y = 0;
    ListNode *p = A;
    while (p)
    {
        if (p->val == 0)
            x++;
        else
            y++;
        p = p->next;
    }
    p = A;
    while (x)
    {
        p->val = 0;
        x--;
        p = p->next;
    }
    while (y)
    {
        p->val = 1;
        y--;
        p = p->next;
    }
    return A;
}
