int Solution::solve(string A)
{
    stack<int> s;
    int n = A.size();
    for (int i = 0; i < n; i++)
    {
        if (A[i] == '(')
        {
            s.push(A[i]);
        }
        else if (!s.empty() && s.top() == '(')
        {
            s.pop();
        }
        else
        {
            return 0;
        }
    }
    if (s.empty())
        return 1;
    return 0;
}
