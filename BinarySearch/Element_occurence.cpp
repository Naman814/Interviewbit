int binary_Search_start(vector<int> A, int l, int h, int key, int &start)
{
    while (l <= h)
    {
        int mid = (l + h) / 2;
        if (A[mid] == key)
        {
            start = mid;
            h = mid - 1;
        }
        else if (A[mid] < key)
        {
            l = mid + 1;
        }
        else
        {
            h = mid - 1;
        }
    }
    return start;
}

int binary_Search_end(vector<int> A, int l, int h, int key, int &end)
{
    while (l <= h)
    {
        int mid = (l + h) / 2;
        if (A[mid] == key)
        {
            end = mid;
            l = mid + 1;
        }
        else if (A[mid] < key)
        {
            l = mid + 1;
        }
        else
        {
            h = mid - 1;
        }
    }
    return end;
}

int Solution::findCount(const vector<int> &A, int B)
{
    int start = -1;
    int n = A.size();
    if (binary_Search_start(A, 0, n - 1, B, start) < 0)
    {
        return 0;
    }
    else
    {
        int end = -1;
        binary_Search_end(A, 0, n - 1, B, end);
        return end - start + 1;
    }
}
