//using lps array of kmp

vector<int> compute_lps(const string &A)
{
    int n = A.size();
    vector<int> lps(n);
    lps[0] = 0;
    for (int i = 1; i < n; i++)
    {
        int j = lps[i - 1];
        while (j > 0 && A[i] != A[j])
        {
            j = lps[j - 1];
        }
        if (A[i] == A[j])
        {
            j++;
        }
        lps[i] = j;
    }
    return lps;
}

int Solution::solve(string A)
{
    int n = A.size();
    string rev = A;
    reverse(rev.begin(), rev.end());
    string concat = A + "$" + rev;
    vector<int> lps = compute_lps(concat);
    int characters_matched = lps[lps.size() - 1];
    return n - characters_matched;
}
