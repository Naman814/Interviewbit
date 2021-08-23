string Solution::longestCommonPrefix(vector<string> &A)
{
    int n = A.size();
    if (n == 0)
        return "";
    if (n == 1)
        return A[0];

    sort(A.begin(), A.end());
    int len = min(A[0].length(), A[n - 1].length());
    int i = 0;
    string first = A[0];
    string last = A[n - 1];
    while (i < len and first[i] == last[i])
    {
        i++;
    }
    string res = first.substr(0, i);
    return res;
}
