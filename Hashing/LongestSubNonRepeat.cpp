int Solution::lengthOfLongestSubstring(string s)
{
    int n = s.size();
    int ans = 0;
    unordered_map<int, int> newIdx;
    int i = 0;
    for (int j = 0; j < n; ++j)
    {
        // if s[j] was seen before, update left pointer
        if (newIdx.count(s[j]) > 0)
        {
            i = max(i, newIdx[s[j]] + 1);
        }

        ans = max(ans, j - i + 1);
        newIdx[s[j]] = j; //always keep track of the new index of s[j];
    }
    return ans;
}
