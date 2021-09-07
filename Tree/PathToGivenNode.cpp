void path(TreeNode *root, int B, vector<int> res, vector<int> &ans)
{
    if (!root)
        return;
    res.push_back(root->val);
    if (root->val == B)
    {
        for (int i = 0; i < res.size(); i++)
        {
            ans.push_back(res[i]);
        }
        return;
    }
    path(root->left, B, res, ans);
    path(root->right, B, res, ans);
}
vector<int> Solution::solve(TreeNode *A, int B)
{
    vector<int> res;
    vector<int> ans;
    path(A, B, res, ans);
    return ans;
}
