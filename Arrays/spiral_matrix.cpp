
vector<int> Solution::spiralOrder(const vector<vector<int>> &A)
{
    int n = A.size();
    int m = A[0].size();
    int top = 0, bottom = n - 1, left = 0, right = m - 1;
    vector<int> ans;
    int direction = 0;
    while (top <= bottom and left <= right)
    {
        if (direction == 0)
        {
            for (int i = left; i <= right; i++)
            {
                ans.push_back(A[top][i]);
            }
            top++;
        }
        if (direction == 1)
        {
            for (int i = top; i <= bottom; i++)
            {
                ans.push_back(A[i][right]);
            }
            right--;
        }
        if (direction == 2)
        {
            for (int i = right; i >= left; i--)
            {
                ans.push_back(A[bottom][i]);
            }
            bottom--;
        }
        if (direction == 3)
        {
            for (int i = bottom; i >= top; i--)
            {
                ans.push_back(A[i][left]);
            }
            left++;
        }
        direction = (direction + 1) % 4;
    }

    return ans;
}