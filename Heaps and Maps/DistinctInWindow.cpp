vector<int> Solution::dNums(vector<int> &A, int B)
{
    int n = A.size();
    vector<int> res;
    if (B > n)
        return res;
    int cnt = 0;
    unordered_map<int, int> m;
    for (int i = 0; i < B; i++)
    {
        m[A[i]]++;
    }
    cnt = m.size();
    res.push_back(cnt);
    for (int i = B; i < n; i++)
    {
        if (m[A[i - B]] == 1)
        {
            cnt--;
        }
        m[A[i - B]]--;
        if (m[A[i]] == 0)
        {
            cnt++;
        }
        m[A[i]]++;
        res.push_back(cnt);
    }
    return res;
}
