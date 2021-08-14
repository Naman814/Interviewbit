int Solution::findMin(const vector<int> &A)
{
    int low = 0;
    int high = A.size() - 1;
    int ans = INT_MAX;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (ans >= A[mid])
            ans = A[mid];
        if (A[mid] > A[high])
            low = mid + 1;
        else
            high = mid - 1;
    }

    return ans;
}
