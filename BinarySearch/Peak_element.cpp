int binary_Seach(vector<int> arr, int low, int high, int n)
{
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if ((mid == 0 || arr[mid - 1] <= arr[mid]) &&
            (mid == n - 1 || arr[mid + 1] <= arr[mid]))
            return mid;

        else if (mid > 0 && arr[mid - 1] > arr[mid])
            high = mid - 1;

        else
            low = mid + 1;
    }
    return -1;
}

int Solution::solve(vector<int> &A)
{
    int n = A.size();
    return A[binary_Seach(A, 0, n - 1, n)];
}
