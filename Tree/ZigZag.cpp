// queue based approach
vector<vector<int>> Solution::zigzagLevelOrder(TreeNode *root)
{
    vector<vector<int>> ans;
    if (!root)
        return ans;
    queue<TreeNode *> q;
    q.push(root);
    int level = 1;

    while (!q.empty())
    {
        int n = q.size();
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            TreeNode *temp = q.front();
            q.pop();
            v.push_back(temp->val);
            if (temp->left)
                q.push(temp->left);
            if (temp->right)
                q.push(temp->right);
        }
        if (level % 2 == 0)
            reverse(v.begin(), v.end());
        level++;
        ans.push_back(v);
    }
    return ans;
}

// stack based apporach
void solve(TreeNode *A, vector<vector<int>> &res)
{
    stack<TreeNode *> s1, s2;
    vector<int> v;
    if (!A)
        return;
    s1.push(A);
    while (!s1.empty() || !s2.empty())
    {
        while (!s1.empty())
        {
            TreeNode *temp = s1.top();
            s1.pop();
            v.push_back(temp->val);
            if (temp->left)
            {
                s2.push(temp->left);
            }
            if (temp->right)
            {
                s2.push(temp->right);
            }
        }
        if (v.size() != 0)
        {
            res.push_back(v);
        }
        v.clear();
        while (!s2.empty())
        {
            TreeNode *temp = s2.top();
            s2.pop();
            v.push_back(temp->val);
            if (temp->right)
            {
                s1.push(temp->right);
            }
            if (temp->left)
            {
                s1.push(temp->left);
            }
        }
        if (v.size() != 0)
        {
            res.push_back(v);
        }
        v.clear();
    }
}
vector<vector<int>> Solution::zigzagLevelOrder(TreeNode *A)
{
    vector<vector<int>> res;
    solve(A, res);
    return res;
}
