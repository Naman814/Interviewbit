int peak_element(vector<int> A, int n, int l, int h)
{
    while (l <= h)
    {
        int mid = (l + h) / 2;
        if ((mid == 0 || A[mid - 1] <= A[mid]) and (mid == n - 1 || A[mid + 1] <= A[mid]))
        {
            return mid;
        }
        else if (mid > 0 and A[mid - 1] > A[mid])
        {
            h = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
}

int b_asc(vector<int> A, int low, int high, int key)
{
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (A[mid] == key)
            return mid;
        else if (A[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

int b_dsc(vector<int> A, int low, int high, int key)
{
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (A[mid] == key)
            return mid;
        else if (A[mid] < key)
            high = mid - 1;
        else
            low = mid + 1;
    }
    return -1;
}

int Solution::solve(vector<int> &A, int B)
{

    int index = peak_element(A, A.size(), 0, A.size() - 1);
    if (B == A[index])
        return index;
    else if (B > A[index])
        return -1;
    int a = b_asc(A, 0, index, B);
    if (a == -1)
    {
        return b_dsc(A, index + 1, A.size() - 1, B);
    }
    else
        return a;
}
