
/* Two Approches are mentioned.
Approach 1 : Hashing without extra space, since here vector was given as const so I created extra space else it can be done using the same array.

int Solution::repeatedNumber(const vector<int> &A)
{
    int n = A.size();
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        v.push_back(A[i]);
    }
    for (int i = 0; i < n; i++)
    {
        v[v[i] % n] += n;
    }
    for (int i = 0; i < n; i++)
    {
        if (v[i] / n > 1)
        {
            return i;
        }
    }
    return -1;
}

Approach 2 : Tortoise Method of linked list.(More efficient)

int Solution::repeatedNumber(const vector<int> &A)
{
    int fast = A[A[0]];
    int slow = A[0];
    while (slow != fast)
    {
        slow = A[slow];
        fast = A[A[fast]];
    }

    fast = 0;
    while (slow != fast)
    {
        slow = A[slow];
        fast = A[fast];
    }
    if (slow == 0)
        return -1;
    return slow;
}
