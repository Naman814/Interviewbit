int Solution::maximumGap(const vector<int> &A)
{
    int big = 0;
    int n = A.size();
    vector<int> left(n);
    vector<int> right(n);
    left[0] = A[0];
    right[n - 1] = A[n - 1];
    for (int i = 1; i < n; i++)
        left[i] = min(left[i - 1], A[i]);
    for (int i = n - 2; i >= 0; i--)
        right[i] = max(A[i], right[i + 1]);
    int x = 0, y = 0;
    while (x < n and y < n)
    {
        if (left[x] <= right[y])
        {
            big = max(big, (y - x));
            y++;
        }
        else
        {
            x++;
        }
    }
    return big;
}
