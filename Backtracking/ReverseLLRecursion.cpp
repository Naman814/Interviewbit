
void reverse(ListNode *prev, ListNode *curr, ListNode *&A)
{
    if (!curr->next)
    {
        A = curr;
        curr->next = prev;
        return;
    }
    ListNode *next = curr->next;
    curr->next = prev;
    reverse(curr, next, A);
}

ListNode *Solution::reverseList(ListNode *A)
{
    ListNode *prev = NULL, *curr = A;
    reverse(prev, curr, A);
    return A;
}
