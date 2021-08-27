
// TC : O(n^2)
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

