
void backtrack(vector<int> &A, vector<vector<int>> &res, vector<int> &v, int target, int idx)
{
    if (target == 0)
    {
        res.push_back(v);
        return;
    }
    while (idx < A.size() && target - A[idx] >= 0)
    {
        v.push_back(A[idx]);
        backtrack(A, res, v, target - A[idx], idx);
        idx++;
        v.pop_back();
    }
}

vector<vector<int>> Solution::combinationSum(vector<int> &A, int B)
{
    vector<vector<int>> res;
    sort(A.begin(), A.end());
    A.erase(unique(A.begin(), A.end()), A.end());
    vector<int> v;
    backtrack(A, res, v, B, 0);
    return res;
}
