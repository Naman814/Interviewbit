
bool solve(string str)
{
    int i = 0, j = str.length() - 1;
    while (i < j)
    {
        if (str[i] != str[j])
        {
            return false;
        }
        i++;
        j--;
    }
    return true;
}

int Solution::isPalindrome(string A)
{
    string temp = "";
    transform(A.begin(), A.end(), A.begin(), ::tolower);
    for (int i = 0; i < A.length(); i++)
    {
        if (A[i] >= 'a' and A[i] <= 'z' || A[i] >= '0' and A[i] <= '9')
        {
            temp += A[i];
        }
    }
    return solve(temp);
}
