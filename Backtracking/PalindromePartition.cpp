bool ispal(string A, int i, int j)
{
    while (i < j)
    {
        if (A[i] != A[j])
        {
            return false;
        }
        i++;
        j--;
    }
    return true;
}
void solve(string A, vector<vector<string>> &res, vector<string> &curr, int start, int n)
{
    if (start >= n)
    {
        res.push_back(curr);
        return;
    }
    for (int i = start; i < n; i++)
    {
        if (ispal(A, start, i))
        {
            curr.push_back(A.substr(start, i - start + 1));
            solve(A, res, curr, i + 1, n);
            curr.pop_back();
        }
    }
}

vector<vector<string>> Solution::partition(string A)
{
    vector<vector<string>> res;
    vector<string> curr;
    int n = A.length();
    solve(A, res, curr, 0, n);
    return res;
}
