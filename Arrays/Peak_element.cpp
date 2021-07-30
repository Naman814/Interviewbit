// Refer geeks for geeks for this problem, some issues with interviewbit

int Solution::perfectPeak(vector<int> &A)
{
    int l = 0, h = n - 1;
    while (l <= h)
    {
        int mid = l + (h - l) / 2;
        if ((mid == 0 || A[mid - 1] <= A[mid]) && (mid == n - 1 || A[mid + 1] <= A[mid]))
        {
            return mid;
        }
        else if (A[mid - 1] > A[mid])
        {
            h = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }

    return -1;
}
