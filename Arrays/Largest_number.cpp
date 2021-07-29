
bool comp(string a, string b)
{
    string x = "", y = "";
    x = a + b;
    y = b + a;
    return x.compare(y) > 0 ? 1 : 0;
}

string Solution::largestNumber(const vector<int> &A)
{

    vector<string> v;
    int n = A.size();

    for (int i = 0; i < n; i++)
    {
        v.push_back(to_string(A[i]));
    }
    sort(v.begin(), v.end(), comp);
    string res = "";
    for (int i = 0; i < v.size(); i++)
    {
        res += v[i];
    }
    int cnt = 0;
    while (res[cnt] == '0')
    {
        cnt++;
    }
    if (cnt == res.length())
    {
        res = "0";
    }
    return res;
}
