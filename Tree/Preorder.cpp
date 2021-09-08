// Iterative
vector<int> Solution::preorderTraversal(TreeNode *A)
{
    stack<TreeNode *> s;
    vector<int> v;

    while (A || !s.empty())
    {
        if (A)
        {
            v.push_back(A->val);
            s.push(A);
            A = A->left;
        }
        else
        {
            A = s.top();
            s.pop();
            A = A->right;
        }
    }
    return v;
}

// Recursive
void solve(TreeNode *A, vector<int> &ans)
{
    if (!A)
        return;
    ans.push_back(A->val);
    solve(A->left, ans);
    solve(A->right, ans);
}

vector<int> Solution::preorderTraversal(TreeNode *A)
{
    vector<int> ans;
    solve(A, ans);
    return ans;
}
