
int numberofPainters(vector<int> C, int mid)
{
    int total = 0, num = 1;
    for (int i = 0; i < C.size(); i++)
    {
        total = (total + C[i]) % 10000003;
        if (total > mid)
        {
            num++;
            total = C[i];
        }
    }
    return num;
}

int Solution::paint(int A, int B, vector<int> &C)
{

    int big = LONG_MIN;
    int sum = 0;
    for (int i = 0; i < C.size(); i++)
    {
        sum += C[i];
        big = max(big, C[i]);
    }
    long long int low = (big) % 10000003;
    long long int high = (sum) % 10000003;

    while (low < high)
    {
        long long int mid = low + (high - low) / 2;
        long long int paintersReq = numberofPainters(C, mid);
        if (paintersReq <= A)
        {
            high = mid;
        }
        else
        {
            low = mid + 1;
        }
    }

    return (low * B) % 10000003;
}
