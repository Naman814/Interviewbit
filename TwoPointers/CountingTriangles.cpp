int Solution::nTriang(vector<int> &A)
{
    int i, j, k, n = A.size(), cnt = 0;
    sort(A.begin(), A.end());
    if (n < 3)
        return 0;
    for (i = 0; i < n - 2; i++)
    {
        k = i + 2;
        for (j = i + 1; j < n - 1; j++)
        {
            while (k < n && A[i] + A[j] > A[k])
                k++;
            if (k > j)
                cnt += k - j - 1;
            cnt = cnt % 1000000007;
        }
    }
    return cnt;
}
