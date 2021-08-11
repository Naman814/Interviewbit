int Solution::trailingZeroes(int A)
{
    if (A < 0)
        return -1;
    int count = 0;
    int i = 5;
    while (A / i > 0)
    {
        count += A / i;
        i *= 5;
    }
    return count;
}
