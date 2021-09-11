int Solution::solve(vector<int> &A, int B)
{
    map<int, int> m;
    int x_or = 0, cnt = 0;
    int n = A.size();
    for (int i = 0; i < n; i++)
    {
        x_or = x_or ^ A[i];
        if (x_or == B)
        {
            a
                cnt++;
        }
        if (m.find(x_or ^ B) != m.end())
        {
            cnt += m[x_or ^ B];
        }
        m[x_or]++;
    }
    return cnt;
}
