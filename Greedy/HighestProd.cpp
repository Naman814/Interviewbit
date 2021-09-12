int Solution::maxp3(vector<int> &A)
{
    sort(A.begin(), A.end());
    int n = A.size();
    long long int prod1 = (A[n - 1] * A[n - 2] * A[n - 3]);
    long long int prod2 = (A[0] * A[1] * A[n - 1]);
    return max(prod1, prod2);
}
