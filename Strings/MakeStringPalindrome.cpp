//using lps array of kmp

vector<int> compute_lps(const string &A)
{
    int n = A.size();
    vector<int> lps(n);
    lps[0] = 0;
    int len = 0, i = 1;
    while (i < n)
    {
        if (A[i] == A[len])
        {
            len++;
            lps[i] = len;
            i++;
        }
        else
        {
            if (len != 0)
            {
                len = lps[len - 1];
            }
            else
            {
                lps[i] = 0;
                i++;
            }
        }
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
