string Solution::reverseString(string A)
{
    stack<char> s;
    int n = A.length();
    for (int i = 0; i < n; i++)
    {
        s.push(A[i]);
    }
    string str = "";
    while (!s.empty())
    {
        str += s.top();
        s.pop();
    }
    return str;
}
