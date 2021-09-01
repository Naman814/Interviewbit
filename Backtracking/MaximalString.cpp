void func(string A, int k, int idx, string &big)
{
    if (k == 0)
        return;
    int n = A.length();
    char ma_x = A[idx];
    for (int j = idx + 1; j < n; j++)
    {
        if (ma_x < A[j])
        {
            ma_x = A[j];
        }
    }
    if (ma_x != A[idx])
    {
        k--;
    }
    for (int j = n - 1; j >= idx; j--)
    {
        if (ma_x == A[j])
        {
            swap(A[idx], A[j]);

            if (A.compare(big) > 0)
            {
                big = A;
            }
            func(A, k, idx + 1, big);
            swap(A[idx], A[j]);
        }
    }
}

string Solution::solve(string A, int B)
{
    string big = A;
    func(A, B, 0, big);
    return big;
}
