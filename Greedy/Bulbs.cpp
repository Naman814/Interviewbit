//Approach 1
int Solution::bulbs(vector<int> &A)
{
    int n = A.size();
    int count = 0, state = 0;
    for (int i = 0; i < n; i++)
    {
        if (A[i] == state)
        {
            state = 1 - state;
            count++;
        }
    }
    return count;
}

//Approach 2
int Solution::bulbs(vector<int> &A)
{
    int ans = 0;
    int cnt = 0;
    int n = A.size();
    for (int i = 0; i < n; i++)
    {
        if (A[i] == 1 && cnt % 2 == 0)
        {
            continue;
        }
        else if (A[i] == 0 && cnt % 2 != 0)
        {
            continue;
        }
        else if (A[i] == 1 && cnt % 2 != 0)
        {
            ans++;
            cnt++;
        }
        else if (A[i] == 0 && cnt % 2 == 0)
        {
            ans++;
            cnt++;
        }
    }
    return ans;
}
