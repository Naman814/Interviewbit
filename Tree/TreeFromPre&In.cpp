int preindex = 0;
TreeNode *solve(vector<int> &A, int start, int end, unordered_map<int, int> &m)
{
    if (start > end)
    {
        return NULL;
    }
    TreeNode *temp = new TreeNode(A[preindex++]);
    if (start == end)
        return temp;
    int idx = m[temp->val];
    temp->left = solve(A, start, idx - 1, m);
    temp->right = solve(A, idx + 1, end, m);
    return temp;
}

TreeNode *Solution::buildTree(vector<int> &A, vector<int> &B)
{
    unordered_map<int, int> m;
    preindex = 0;
    int n = A.size();
    for (int i = 0; i < n; i++)
    {
        m[B[i]] = i;
    }
    TreeNode *t = solve(A, 0, n - 1, m);
    return t;
}
