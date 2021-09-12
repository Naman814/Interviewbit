int Solution::solve(vector<vector<int>> &A)
{
    int n = A.size();
    vector<int> start(n), finish(n);
    for (int i = 0; i < n; i++)
    {
        start[i] = A[i][0];
        finish[i] = A[i][1];
    }
    sort(start.begin(), start.end());
    sort(finish.begin(), finish.end());
    int room = 1, i = 0, j = 1, ans = 0;
    while (i < n && j < n)
    {
        if (start[j] < finish[i])
        {
            room++;
            j++;
        }
        else
        {
            room--;
            i++;
        }
        ans = max(ans, room);
    }
    return ans;
}
