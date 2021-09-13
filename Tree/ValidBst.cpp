
bool solve(TreeNode *root, TreeNode *mini, TreeNode *maxi)
{
    if (!root)
        return true;
    if ((mini && root->val <= mini->val) || (maxi && root->val >= maxi->val))
        return false;
    return solve(root->left, mini, root) && solve(root->right, root, maxi);
}

int Solution::isValidBST(TreeNode *A)
{
    return solve(A, NULL, NULL);
}
