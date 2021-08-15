string Solution::solve(string A)
{
    int n = A.size(), i, j;
    for (i = n - 2; i >= 0; i--)
        if (A[i] < A[i + 1])
            break;

    if (i == -1)
        return "-1";
    else
        for (j = n - 1; j > i; j--)
        {
            if (A[j] > A[i])
                break;
        }
    swap(A[i], A[j]);
    sort(A.begin() + i + 1, A.end());
    return A;
}