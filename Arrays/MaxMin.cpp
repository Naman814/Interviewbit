int Solution::solve(vector<int> &A)
{
    int big = INT_MIN;
    int small = INT_MAX;
    for (int i = 0; i < A.size(); i++)
    {
        big = max(big, A[i]);
        small = min(small, A[i]);
    }
    return big + small;
}
