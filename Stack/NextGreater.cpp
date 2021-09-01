vector<int> Solution::nextGreater(vector<int> &A)
{
    stack<int> s;
    int n = A.size();
    vector<int> res(n);
    for (int i = 0; i < n; i++)
    {
        if (s.empty())
        {
            s.push(i);
        }
        else
        {
            while (!s.empty() && A[i] > A[s.top()])
            {
                int idx = s.top();
                res[idx] = A[i];
                s.pop();
            }
        }
        s.push(i);
    }
    while (!s.empty())
    {
        res[s.top()] = -1;
        s.pop();
    }
    return res;
}
