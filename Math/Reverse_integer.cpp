
int reverse(int A)
{
    long long ans = 0;
    while (A)
    {
        ans = ans * 10 + A % 10;
        if (ans > INT_MAX || ans < INT_MIN)
            return 0;
        A = A / 10;
    }
    return ans;
}
