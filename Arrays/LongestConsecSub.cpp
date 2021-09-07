int Solution::longestConsecutive(const vector<int> &A)
{
    unordered_set<int> s;
    for (int i = 0; i < A.size(); i++)
    {
        s.insert(A[i]);
    }

    int max_cnt = 0;
    int n = A.size();

    for (int i = 0; i < n; i++)
    {

        int temp = A[i] - 1;
        if (s.find(temp) == s.end())
        {
            int j = A[i];
            while (s.find(j) != s.end())
            {
                j++;
            }
            max_cnt = max(max_cnt, j - A[i]);
        }
    }
    return max_cnt;
}
