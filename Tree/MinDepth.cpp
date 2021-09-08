void solve(TreeNode *A, int lvl, int &ans)
{
    if (!A)
        return;
    if (!A->left && !A->right)
    {
        ans = min(ans, lvl);
    }
    solve(A->left, lvl + 1, ans);
    solve(A->right, lvl + 1, ans);
    return;
}

int Solution::minDepth(TreeNode *A)
{
    int lvl = 1;
    int ans = INT_MAX;
    solve(A, lvl, ans);
    return ans;
}
