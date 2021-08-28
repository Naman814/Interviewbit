ListNode *Solution::addTwoNumbers(ListNode *A, ListNode *B)
{

    int carry = 0, sum = 0;
    ListNode *head = NULL, *tail = NULL;
    while (A || B)
    {
        sum = carry;
        if (A)
        {
            sum += A->val;
            A = A->next;
        }
        if (B)
        {
            sum += B->val;
            B = B->next;
        }
        if (!head)
        {
            head = new ListNode(sum % 10);
            tail = head;
        }
        else
        {
            ListNode *temp = new ListNode(sum % 10);
            tail->next = temp;
            tail = temp;
        }
        carry = sum / 10;
    }
    if (carry)
    {
        ListNode *temp = new ListNode(1);
        tail->next = temp;
    }
    return head;
}
