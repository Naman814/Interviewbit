int Solution::trap(const vector<int> &A)
{
    int n = A.size();
    int big = 0;
    vector<int> pre(n), suff(n);
    pre[0] = A[0];
    big = A[0];
    suff[n - 1] = A[n - 1];
    for (int i = 1; i < n; i++)
    {
        if (big < A[i])
        {
            big = A[i];
        }
        pre[i] = big;
    }
    big = A[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        if (big < A[i])
        {
            big = A[i];
        }
        suff[i] = big;
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans += max(0, min(pre[i], suff[i]) - A[i]);
    }
    return ans;
}
