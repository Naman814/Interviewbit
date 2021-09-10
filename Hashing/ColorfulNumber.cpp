
void solve(vector<int> &arr, int A)
{
    while (A > 0)
    {
        arr.push_back(A % 10);
        A = A / 10;
    }
    reverse(arr.begin(), arr.end());
}

int Solution::colorful(int A)
{
    vector<int> arr;
    unordered_map<int, bool> m;
    solve(arr, A);
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        int prod = 1;
        for (int j = i; j < n; j++)
        {
            prod *= arr[j];
            if (m.find(prod) == m.end())
            {
                m[prod] = true;
            }
            else
            {
                return 0;
            }
        }
    }
    return 1;
}
