int Solution::Mod(int A, int B, int C)
{
    if (B == 0)
        return 1 % C;
    long long x;
    if (B % 2 == 0)
    {
        x = Mod(A, B / 2, C);
        x = (x * x) % C;
    }
    else
    {
        x = A % C;
        x = (x * (Mod(A, B - 1, C))) % C;
    }
    return (x + C) % C;
}
