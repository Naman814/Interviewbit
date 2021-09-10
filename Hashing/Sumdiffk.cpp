int Solution::diffPossible(const vector<int> &A, int B)
{
    set<int> s;
    int n = A.size();
    for (int i = 0; i < n; i++)
    {
        if (s.find(A[i] - B) != s.end() || s.find(A[i] + B) != s.end())
        {
            return 1;
        }
        s.insert(A[i]);
    }
    return 0;
}

// count distint pairs with diff k
int TotalPairs(vector<int> nums, int k)
{
    map<int, int> mp;
    for (int i = 0; i < nums.size(); i++)
    {
        mp[nums[i]]++;
    }
    int cnt = 0;

    if (k == 0)
    {
        for (auto i : mp)
        {

            if (i.second > 1)
                cnt++;
        }
    }
    else
    {
        for (auto i : mp)
        {

            if (mp.find(i.first + k) != mp.end())
            {
                cnt++;
            }
        }
    }
    return cnt;
}