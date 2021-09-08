vector<int> Solution::solve(TreeNode *A)
{
    queue<TreeNode *> q;
    vector<int> v;
    while (A || !q.empty())
    {
        if (A)
        {
            v.push_back(A->val);
        }
        else
        {
            A = q.front();
            v.push_back(A->val);
            q.pop();
        }
        if (A->left)
        {
            q.push(A->left);
        }
        A = A->right;
    }
    return v;
}