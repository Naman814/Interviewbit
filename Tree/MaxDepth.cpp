int Solution::maxDepth(TreeNode *A)
{
    if (!A)
        return 0;
    int x = maxDepth(A->left);
    int y = maxDepth(A->right);
    return max(x, y) + 1;
}
