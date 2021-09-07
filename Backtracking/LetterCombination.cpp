void solve(string &curr, string A, int idx, unordered_map<int, string> m, vector<string> &res)
{
    int n = A.length();
    if (idx == n)
    {
        res.push_back(curr);
        return;
    }
    int a = A[idx] - '0';
    for (int i = 0; i < m[a].length(); i++)
    {
        curr += (m[a][i]);
        solve(curr, A, idx + 1, m, res);
        curr.pop_back();
    }
}
vector<string> Solution::letterCombinations(string A)
{
    unordered_map<int, string> m;
    m[2] = "abc";
    m[3] = "def";
    m[4] = "ghi";
    m[5] = "jkl";
    m[6] = "mno";
    m[7] = "pqrs";
    m[8] = "tuv";
    m[9] = "wxyz";
    m[0] = "0";
    m[1] = "1";
    vector<string> res;
    string curr = "";
    solve(curr, A, 0, m, res);
    return res;
}