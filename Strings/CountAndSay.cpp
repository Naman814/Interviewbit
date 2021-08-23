string Solution::countAndSay(int A)
{
    if (A == 1)
        return "1";
    if (A == 2)
        return "11";
    string s = "11";
    for (int i = 3; i <= A; i++)
    {
        string t = "";
        s += "$";
        int cnt = 1;
        for (int j = 1; j < s.length(); j++)
        {
            if (s[j] == s[j - 1])
            {
                cnt++;
            }
            else
            {
                t += to_string(cnt);
                t += s[j - 1];
                cnt = 1;
            }
        }
        s = t;
    }
    return s;
}
