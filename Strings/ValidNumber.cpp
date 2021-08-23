int Solution::isNumber(const string A)
{
    int i = 0, j = A.length() - 1;
    int n = A.length();
    while (i < n && A[i] == ' ')
    {
        i++;
    }
    while (j >= 0 && A[j] == ' ')
    {
        j--;
    }
    if (i > j)
        return 0;
    if (i == j && !(A[i] >= '0' && A[i] <= '9'))
        return 0;

    if (A[i] != '+' && A[i] != '-' && A[i] != '.' && !(A[i] >= '0' && A[i] <= '9'))
    {
        return 0;
    }
    bool flagDot = false;
    for (i; i <= j; i++)
    {

        if (A[i] != 'e' && A[i] != '.' && A[i] != '+' && A[i] != '-' && !(A[i] >= '0' && A[i] <= '9'))
            return 0;
        if (A[i] == '.')
        {
            if (flagDot == true)
                return 0;
            if (i + 1 > A.length())
                return 0;
            if (!(A[i + 1] >= '0' && A[i + 1] <= '9'))
                return 0;
        }
        else if (A[i] == 'e')
        {
            flagDot = true;
            if (!(A[i - 1] >= '0' && A[i - 1] <= '9'))
                return 0;
            if (i + 1 > A.length())
                return 0;
            if (A[i + 1] != '+' && A[i + 1] != '-' && (A[i + 1] >= '0' && A[i] <= '9'))
                return 0;
        }
    }
    return 1;
}
