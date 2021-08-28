
//Approach 1 : space : O(N)
int Solution::kthsmallest(const vector<int> &arr, int k)
{
    int low = *min_element(arr.begin(), arr.end());
    int high = *max_element(arr.begin(), arr.end());
    int n = arr.size();
    while (low <= high)
    {

        int mid = low + (high - low) / 2;
        int countless = 0, countequal = 0;
        for (int i = 0; i < n; ++i)
        {
            if (arr[i] < mid)
                ++countless;
            else if (arr[i] == mid)
                ++countequal;
        }
        if (countless < k && (countless + countequal) >= k)
        {
            return mid;
        }
        else if (countless >= k)
        {
            high = mid - 1;
        }
        else if (countless < k && countless + countequal < k)
        {
            low = mid + 1;
        }
    }
}

//Approach 2 : space : O(N)

int Solution::kthsmallest(const vector<int> &A, int B)
{
    vector<int> v;
    for (auto x : A)
    {
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    return v[B - 1];
}
