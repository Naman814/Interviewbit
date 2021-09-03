void solve(vector<int> A, vector<vector<int>> &res, int start, int n)
{
    if (start >= n)
    {
        res.push_back(A);
        return;
    }
    for (int i = start; i <= n; i++)
    {
        swap(A[start], A[i]);
        solve(A, res, start + 1, n);
        swap(A[start], A[i]);
    }
}
vector<vector<int>> Solution::permute(vector<int> &A)
{
    vector<vector<int>> res;
    vector<int> curr;
    int n = A.size();
    solve(A, res, 0, n - 1);
    return res;
}
