double Solution::findMedianSortedArrays(const vector<int> &A, const vector<int> &B)
{
    if (A.size() > B.size())
        return findMedianSortedArrays(B, A);
    int n1 = A.size();
    int n2 = B.size();
    int low = 0, high = n1;
    while (low <= high)
    {
        int cut1 = (low + high) / 2;
        int cut2 = (n1 + n2 + 1) / 2 - cut1;
        int l1 = cut1 == 0 ? INT_MIN : A[cut1 - 1];
        int l2 = cut2 == 0 ? INT_MIN : B[cut2 - 1];
        int r1 = cut1 == n1 ? INT_MAX : A[cut1];
        int r2 = cut2 == n2 ? INT_MAX : B[cut2];
        if (l1 <= r2 and l2 <= r1)
        {
            return (n1 + n2) % 2 == 0 ? (max(l1, l2) + min(r1, r2)) / 2.0 : max(l1, l2);
        }
        else if (l1 > r2)
        {
            high = cut1 - 1;
        }
        else
        {
            low = cut1 + 1;
        }
    }

    return 0.0;
}
