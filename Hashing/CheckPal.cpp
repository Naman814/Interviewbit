int Solution::solve(string A)
{
    map<char, int> m;
    int n = A.length();
    for (int i = 0; i < n; i++)
    {
        m[A[i]]++;
    }
    int odd_cnt = 0;
    for (auto x : m)
    {
        if (x.second & 1 == 1)
        {
            odd_cnt++;
        }
    }
    if (odd_cnt > 1)
    {
        return 0;
    }
    return 1;
}
