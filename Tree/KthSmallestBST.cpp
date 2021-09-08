void solve(TreeNode *root, int k, int &cnt, int &ans)
{
    if (root)
    {
        solve(root->left, k, cnt, ans);
        cnt++;
        if (cnt == k)
        {
            ans = root->val;
            return;
        }
        solve(root->right, k, cnt, ans);
    }
}

int Solution::kthsmallest(TreeNode *A, int B)
{
    int ans = 0;
    int cnt = 0;
    solve(A, B, cnt, ans);
    return ans;
}