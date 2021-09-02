
void solve(vector<int> A, vector<vector<int>> &res, vector<int> &subset, int idx)
{
    res.push_back(subset);
    for (int i = idx; i < A.size(); i++)
    {
        subset.push_back(A[i]);
        solve(A, res, subset, i + 1);
        subset.pop_back();
    }
}

vector<vector<int>> Solution::subsets(vector<int> &A)
{
    int idx = 0;
    vector<vector<int>> res;
    sort(A.begin(), A.end());
    vector<int> subset;
    solve(A, res, subset, 0);
    return res;
}
