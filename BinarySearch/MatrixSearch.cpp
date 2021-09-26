//Binary Search approach

int Solution::searchMatrix(vector<vector<int>> &A, int B)
{
    int N = A.size();
    int M = A[0].size();
    int start = 0, end = N * M - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        int x = mid / M;
        int y = mid % M;
        if (A[x][y] == B)
            return 1;
        if (B < A[x][y])
            end = mid - 1;
        else
            start = mid + 1;
    }
    return 0;
}

//Sieve of eratosthrene 

int Solution::searchMatrix(vector<vector<int>> &A, int B)
{
    int n = A.size();
    int m = A[0].size();
    int i = 0, j = m - 1;
    bool flag = false;
    while (i < n and j >= 0)
    {
        if (A[i][j] == B)
        {
            return true;
        }
        else if (A[i][j] > B)
        {
            j--;
        }
        else
        {
            i++;
        }
    }
    return flag;
}
