int height(TreeNode *root)
{
    if (!root)
        return 0;
    int x = height(root->left);
    int y = height(root->right);
    return max(x, y) + 1;
}

void right_view(TreeNode *root, int lvl, vector<bool> &vis, vector<int> &res)
{

    if (!root)
        return;
    if (vis[lvl] == false)
    {
        vis[lvl] = true;
        res.push_back(root->val);
    }
    right_view(root->right, lvl + 1, vis, res);
    right_view(root->left, lvl + 1, vis, res);
}

vector<int> Solution::solve(TreeNode *A)
{
    int ht = height(A);
    vector<bool> vis(ht, false);
    vector<int> res;
    right_view(A, 0, vis, res);
    return res;
}
