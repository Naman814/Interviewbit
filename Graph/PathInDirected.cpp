
bool dfs(unordered_map<int, vector<int>> &m, vector<bool> &vis, int src, int dest)
{
    if (src == dest)
    {
        return true;
    }
    vis[src] = true;
    for (auto val : m[src])
    {
        if (!vis[val])
        {
            if (dfs(m, vis, val, dest))
            {
                return true;
            }
        }
    }
    return false;
}

int Solution::solve(int A, vector<vector<int>> &B)
{
    unordered_map<int, vector<int>> m;
    for (auto it : B)
    {
        m[it[0]].push_back(it[1]);
    }
    vector<bool> vis(A + 1, false);
    return dfs(m, vis, 1, A);
}
