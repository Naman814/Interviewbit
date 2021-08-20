int Solution::romanToInt(string A)
{
    unordered_map<char, int> m;
    m['I'] = 1, m['V'] = 5, m['X'] = 10, m['M'] = 1000, m['D'] = 500, m['L'] = 50, m['C'] = 100;
    int n = A.length();
    int temp = m[A[n - 1]];
    int ans = 0;
    ans += temp;
    for (int i = n - 2; i >= 0; i--)
    {
        if (m[A[i]] == temp)
        {
            ans += m[A[i]];
        }
        else if (m[A[i]] < temp)
        {
            ans -= m[A[i]];
            temp = m[A[i]];
        }
        else
        {
            ans += m[A[i]];
            temp = m[A[i]];
        }
    }
    return ans;
}