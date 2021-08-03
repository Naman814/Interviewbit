// Approach - 1
int Solution::solve(int x, int y)
{
    int ans = 0;
    ans += min(abs(x - 1), abs(y - 1));
    ans += min(abs(8 - x), abs(y - 1));
    ans += min(abs(x - 1), abs(8 - y));
    ans += min(abs(8 - x), abs(8 - y));
    return ans;
}

// Approach - 2

int left_up(int A, int B)
{
    int i = A - 1;
    int j = B - 1;
    int count = 0;
    while (i > 0 && j > 0)
    {
        count++;
        i--;
        j--;
    }
    return count;
}

int left_down(int A, int B)
{
    int i = A + 1;
    int j = B - 1;
    int count = 0;
    while (i < 9 && j > 0)
    {
        count++;
        i++;
        j--;
    }
    return count;
}

int right_up(int A, int B)
{
    int i = A - 1;
    int j = B + 1;
    int count = 0;
    while (i > 0 && j < 9)
    {
        count++;
        i--;
        j++;
    }
    return count;
}

int right_down(int A, int B)
{
    int i = A + 1;
    int j = B + 1;
    int count = 0;
    while (i < 9 && j < 9)
    {
        count++;
        i++;
        j++;
    }
    return count;
}

int Solution::solve(int A, int B)
{
    return left_up(A, B) + left_down(A, B) + right_up(A, B) + right_down(A, B);
}
