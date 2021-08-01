// Approach 1 : O(1) space
void Solution::arrange(vector<int> &A)
{
    int n = A.size();
    for (int i = 0; i < n; i++)
    {     
        A[i] += (A[A[i]] % n) * n;
    }
    for (int i = 0; i < n; i++)
    {
        A[i] /= n;
    }
}


// Approach 2 : O(n) space
void Solution::arrange(vector<int> &A)
{
    int n = A.size();
    vector<int> ans(n);
    for (int i = 0; i < n; i++)
    {
        ans[i] = A[A[i]];
    }
    for (int i = 0; i < n; i++)
    {
        A[i] = ans[i];
    }
}
