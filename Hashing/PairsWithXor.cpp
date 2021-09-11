int Solution::solve(vector<int> &A, int B)
{
    set<int> s;
    int n = A.size();
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (s.find(A[i] ^ B) != s.end())
        {
            cnt++;
        }
        s.insert(A[i]);
    }
    return cnt;
}
