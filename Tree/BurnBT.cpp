
int max_dist(unordered_map<TreeNode *, TreeNode *> &m, TreeNode *pos)
{
    queue<TreeNode *> q;
    q.push(pos);
    unordered_map<TreeNode *, int> vis;
    vis[pos] = 1;
    int maxi = 0;
    while (!q.empty())
    {
        int n = q.size();
        int flag = 0;
        for (int i = 0; i < n; i++)
        {
            TreeNode *temp = q.front();
            q.pop();
            if (temp->left && !vis[temp->left])
            {
                vis[temp->left] = 1;
                flag = 1;
                q.push(temp->left);
            }
            if (temp->right && !vis[temp->right])
            {
                vis[temp->right] = 1;
                flag = 1;
                q.push(temp->right);
            }
            if (m[temp] && !vis[m[temp]])
            {
                flag = 1;
                vis[m[temp]] = 1;
                q.push(m[temp]);
            }
        }
        if (flag)
            maxi++;
    }
    return maxi;
}

void bfs(TreeNode *&pos, unordered_map<TreeNode *, TreeNode *> &m, TreeNode *root, int B)
{
    queue<TreeNode *> q;
    if (!root)
        return;
    q.push(root);
    while (!q.empty())
    {
        TreeNode *temp = q.front();
        q.pop();
        if (temp->val == B)
        {
            pos = temp;
        }
        if (temp->left)
        {
            m[temp->left] = temp;
            q.push(temp->left);
        }
        if (temp->right)
        {
            m[temp->right] = temp;
            q.push(temp->right);
        }
    }
}

int Solution::solve(TreeNode *A, int B)
{
    TreeNode *pos = NULL;
    unordered_map<TreeNode *, TreeNode *> m;
    bfs(pos, m, A, B);
    int ans = max_dist(m, pos);
    return ans;
}
