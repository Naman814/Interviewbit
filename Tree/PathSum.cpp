void solve(TreeNode *root, int B, bool &flag)
{
    if (!root)
        return;
    if (!root->left && !root->right && B - root->val == 0)
    {
        flag = true;
        return;
    }
    solve(root->left, B - root->val, flag);
    solve(root->right, B - root->val, flag);
    return;
}

bool hasPathSum(TreeNode *root, int targetSum)
{
    bool flag = false;
    solve(root, targetSum, flag);
    return flag;
}