struct cmp
{
    bool operator()(pair<char, int> a, pair<char, int> b)
    {
        return a.second < b.second;
    }
};
string rearrangeString(string S)
{
    priority_queue<pair<char, int>, vector<pair<char, int>>, cmp> pq;

    unordered_map<char, int> m;
    for (auto x : S)
    {
        m[x]++;
    }
    for (auto y : m)
    {
        pq.push(y);
    }
    auto curr = pq.top();
    if (curr.second > S.length() - m[curr.first] + 1)
        return "-1";
    string ans = "";
    pair<char, int> prev = {'#', 0};
    while (!pq.empty())
    {
        curr = pq.top();
        pq.pop();
        ans.push_back(curr.first);
        curr.second--;
        if (prev.second > 0)
            pq.push(prev);
        prev = curr;
    }
    return ans;
}