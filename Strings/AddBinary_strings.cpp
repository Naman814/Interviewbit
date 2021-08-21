string Solution::addBinary(string s1, string s2)
{
    vector<int> v;
    int n1 = s1.length();
    int n2 = s2.length();
    int carry = 0;
    string ans = "";
    int i = n1 - 1, j = n2 - 1, sum = 0;
    while (i >= 0 || j >= 0)
    {
        sum = carry;
        if (i >= 0)
            sum += (s1[i] - '0');
        if (j >= 0)
            sum += (s2[j] - '0');
        v.push_back(sum % 2);
        carry = sum / 2;
        i--;
        j--;
    }
    if (carry)
        v.push_back(1);
    string temp = "";
    for (int i = 0; i < v.size(); i++)
        ans += to_string(v[i]);

    reverse(ans.begin(), ans.end());
    return ans;
}