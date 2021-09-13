// TC: O(n) Greedy
int Solution::canCompleteCircuit(const vector<int> &A, const vector<int> &B)
{
    int idx = 0, total = 0, tank = 0;
    int n = A.size();
    for (int i = 0; i < n; i++)
    {
        int consume = A[i] - B[i];
        tank += consume;
        if (tank < 0)
        {
            idx = i + 1;
            tank = 0;
        }
        total += consume;
    }
    return total < 0 ? -1 : idx;
}

// TC: O(n^2)
int gasStation(int gas[], int cost[])
{
    for (int i = 0; i < n; i++)
    {
        int stopcount = 0, j = i, total = 0;
        while (stopcount < n)
        {
            total += gas[j % n] - cost[j % n];
            if (total < 0)
            {
                break;
            }
            stopcount++;
            j++;
        }
        if (stopcount == n && total >= 0)
        {
            return i;
        }
    }
}