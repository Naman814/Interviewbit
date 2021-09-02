string Solution::solve(string A)
{
    queue<char> q;
    unordered_map<char, int> m;
    int n = A.length();
    string res = "";
    for (int i = 0; i < n; i++)
    {
        q.push(A[i]);
        m[A[i]]++;
        if (m[A[i]] == 1)
        {
            res += q.front();
        }
        else
        {
            while (!q.empty() && m[q.front()] != 1)
            {
                q.pop();
            }
            if (!q.empty())
            {
                res += q.front();
            }
            else
            {
                res += "#";
            }
        }
    }

    return res;
}
