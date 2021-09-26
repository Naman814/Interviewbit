int countSmallerThanMid(vector<int> &row, int mid)
{
    int l = 0, h = row.size() - 1;
    while (l <= h)
    {
        int md = (l + h) >> 1;
        if (row[md] <= mid)
        {
            l = md + 1;
        }
        else
        {
            h = md - 1;
        }
    }
    return l;
}

int Solution::findMedian(vector<vector<int>> &A)
{
    int mini = INT_MIN, maxi = INT_MAX;
    int r = A.size();
    int c = A[0].size();
    int final_count = (r * c) / 2;
    while (mini <= maxi)
    {
        int mid = (mini + maxi) >> 1;
        int count = 0;
        for (int i = 0; i < r; i++)
        {
            count += countSmallerThanMid(A[i], mid);
        }
        if (count <= final_count)
            mini = mid + 1;
        else
            maxi = mid - 1;
    }
    return mini;
}
