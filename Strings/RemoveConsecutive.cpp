string Solution::solve(string A, int B)
{
    string res = "";
    int cnt = 1;
    char temp = A[0];
    for (int i = 1; i <= A.size(); i++)
    {
        if (A[i] == A[i - 1])
        {
            cnt++;
            if (cnt == B)
            {
                i++;
                temp = A[i];
                cnt = 1;
            }
        }
        else
        {
            res += (temp * cnt);
            cnt = 1;
            temp = A[i];
        }
    }
    return res;
}
