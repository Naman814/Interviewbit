void Solution::sortColors(vector<int> &A)
{
    int n = A.size();
    int l = 0;
    int h = n - 1;
    int mid = 0;
    while (mid <= h)
    {
        if (A[mid] == 0)
        {
            swap(A[mid], A[l]);
            mid++;
            l++;
        }
        else if (A[mid] == 2)
        {
            swap(A[mid], A[h]);
            h--;
        }
        else
        {
            mid++;
        }
    }
}
