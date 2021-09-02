// deque approach O(n)
vector<int> Solution::slidingMaximum(const vector<int> &A, int B)
{
    deque<int> dq;
    vector<int> ans;
    int n = A.size();
    for (int i = 0; i < n; i++)
    {
        if (!dq.empty() and dq.front() == i - B)
        {
            dq.pop_front();
        }
        while (!dq.empty() and A[i] > A[dq.back()])
        {
            dq.pop_back();
        }
        dq.push_back(i);
        if (i >= B - 1)
        {
            ans.push_back(A[dq.front()]);
        }
    }
    return ans;
}

// O(n^2)
int solve(vector<int> A, int x, int y)()
{
    int big = INT_MIN;
    for (int i = x; i <= y; i++)
    {
        big = max(big, A[i]);
    }
    return big;
}

vector<int> Solution::slidingMaximum(const vector<int> &A, int B)
{
    int n = A.size();
    vector<int> res;
    for (int i = 0; i < n - B + 1; i++)
    {
        int temp = solve(A, i, i + B - 1);
        res.push_back(temp);
    }
    return res;
}
