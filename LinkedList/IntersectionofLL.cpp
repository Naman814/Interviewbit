int length(ListNode *a)
{
    int cnt = 0;
    while (a)
    {
        a = a->next;
        cnt++;
    }
    return cnt;
}

ListNode *Solution::getIntersectionNode(ListNode *A, ListNode *B)
{
    int n1 = length(A);
    int n2 = length(B);
    if (n1 > n2)
    {
        int x = n1 - n2;
        while (x)
        {
            A = A->next;
            x--;
        }
    }
    else
    {
        int y = n2 - n1;
        while (y)
        {
            B = B->next;
            y--;
        }
    }
    while (A != B && A && B)
    {
        A = A->next;
        B = B->next;
    }
    return A;
}
