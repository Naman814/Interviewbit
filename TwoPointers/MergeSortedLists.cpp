// Gap method , constant space

void Solution::merge(vector<int> &A, vector<int> &B)
{
    int n = A.size();
    int m = B.size();
    int gap = (m + n) / 2 + (m + n) % 2;
    int i, j;
    while (gap > 0)
    {
        for (i = 0; (i + gap) < n; i++)
        {
            if (A[i] > A[i + gap])
            {
                swap(A[i], A[i + gap]);
            }
        }
        for (j = gap > n ? gap - n : 0; i < n && j < m; i++, j++)
        {
            if (A[i] > B[j])
            {
                swap(A[i], B[j]);
            }
        }
        if (j < m)
        {
            for (int j = 0; j + gap < m; j++)
            {
                if (B[j] > B[j + gap])
                {
                    swap(B[j], B[j + gap]);
                }
            }
        }
        if (gap <= 1)
        {
            break;
        }
        else
        {
            gap = gap / 2 + gap % 2;
        }
    }
    for (int i = 0; i < B.size(); i++)
    {
        A.push_back(B[i]);
    }
}
