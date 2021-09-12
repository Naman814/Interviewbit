
// TC : O(N) SC:O(1)
int Solution::majorityElement(const vector<int> &A)
{
    int element = 0;
    int n = A.size();
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (count == 0)
            element = A[i];
        if (A[i] == element)
            count++;
        else
            count--;
    }
    return element;
}

//TC: O(N) SC: O(N)
int Solution::majorityElement(const vector<int> &A)
{
    int n = A.size();
    map<int, int> m;
    int ans;
    for (int i = 0; i < n; i++)
    {
        m[A[i]]++;
        if (m[A[i]] > (n / 2))
        {
            ans = A[i];
            break;
        }
    }
    return ans;
}
