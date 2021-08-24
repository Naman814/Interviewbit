int Solution::threeSumClosest(vector<int> &A, int B)
{
    sort(A.begin(), A.end());
    int n = A.size();
    int mindiff = INT_MAX;
    int sum;
    for (int i = 0; i < n - 2; i++)
    {
        int l = i + 1;
        int h = n - 1;
        while (l < h)
        {
            int temp = A[i] + A[l] + A[h];
            int diff = abs(temp - B);

            if (diff == 0)
            {
                return temp;
            }
            if (diff < mindiff)
            {
                mindiff = diff;
                sum = temp;
            }
            if (temp < B)
            {
                l++;
            }
            else
            {
                h--;
            }
        }
    }
    return sum;
}
