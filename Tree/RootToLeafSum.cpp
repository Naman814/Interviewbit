void solve(TreeNode *root, int B, vector<vector<int>> &res, vector<int> &v)
{
    if (!root)
        return;
    v.push_back(root->val);
    solve(root->left, B, res, v);
    solve(root->right, B, res, v);
    int sum = 0;
    if (!root->left && !root->right)
    {
        for (int i = v.size() - 1; i >= 0; i--)
        {
            sum += (v[i]);
        }
        if (sum == B)
        {
            res.push_back(v);
        }
    }
    v.pop_back();
}
vector<vector<int>> Solution::pathSum(TreeNode *A, int B)
{
    vector<vector<int>> res;
    vector<int> temp;
    solve(A, B, res, temp);
    return res;
}
