int Solution::maxSubArray(const vector<int> &A)
{
    int sum = 0, big = INT_MIN;
    for (int i = 0; i < A.size(); i++)
    {
        sum += A[i];
        big = max(big, sum);
        if (sum < 0)
        {
            sum = 0;
        }
    }
    return big;
}
