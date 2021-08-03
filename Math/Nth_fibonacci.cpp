int mod = 1000000007;
#define ll long long
void multiply(ll F[2][2], ll M[2][2])
{
    ll x = (F[0][0] * M[0][0]) % mod + (F[0][1] * M[1][0]) % mod;
    ll y = (F[0][0] * M[0][1]) % mod + (F[0][1] * M[1][1]) % mod;
    ll z = (F[1][0] * M[0][0]) % mod + (F[1][1] * M[1][0]) % mod;
    ll w = (F[1][0] * M[0][1]) % mod + (F[1][1] * M[1][1]) % mod;

    F[0][0] = x % mod;
    F[0][1] = y % mod;
    F[1][0] = z % mod;
    F[1][1] = w % mod;
}
void power(ll F[2][2], int n)
{
    if (n == 0 || n == 1)
        return;
    ll M[2][2] = {{1, 1}, {1, 0}};

    power(F, n / 2);
    multiply(F, F);

    if (n % 2 != 0)
        multiply(F, M);
}
int Solution::solve(int n)
{
    ll F[2][2] = {{1, 1}, {1, 0}};
    if (n == 0)
        return 0;
    power(F, n - 1);

    return F[0][0] % mod;
}
