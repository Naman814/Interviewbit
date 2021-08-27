
// Approach 1 : Recursive solution

int Solution::solve(int A)
{
    if (A == 0)
    {
        return 0;
    }
    long long x = 1;
    while ((1 << x) <= A)
    {
        x++;
    }
    x = x - 1;
    long long before = x * (1 << (x - 1));
    long long curr = A - (1 << x) + 1;
    long long remain = A - (1 << x);
    return (before + curr + solve(remain)) % 1000000007;
}

// Approach 2 : TC : O(n^2)
int Solution::solve(int A)
{
    int count = 0;
    for (int i = 1; i <= A; i++)
    {
        int j = i;
        while (j > 0)
        {
            j = j & (j - 1);
            count++;
            count = count % 1000000007;
        }
    }
    return count;
}
