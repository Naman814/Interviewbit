//Approach 1 using sum as key
vector<vector<int> > Solution::anagrams(const vector<string> &A) {

    vector<vector<int> > ans;
    map<int,vector<int>> B;
    
    for(int i=0;i<A.size();i++)
    {
        int sum=0;
        
        for(int j=0;j<A[i].size();j++)
            sum+=A[i][j];    
            
        B[sum].push_back(i+1);
    }
    for(auto it=B.begin();it!=B.end();it++)
    ans.push_back(it->second);
    
    return ans;
    
}


// Approach 2 using sorting
vector<vector<int>> Solution::anagrams(const vector<string> &A)
{
    vector<string> res;
    vector<vector<int>> ans;
    for (auto x : A)
    {
        res.push_back(x);
    }
    int i = 0;
    for (auto x : res)
    {
        sort(x.begin(), x.end());
        res[i] = x;
        i++;
    }
    map<string, vector<int>> m;
    for (int i = 0; i < res.size(); i++)
    {
        if (m.find(res[i]) != m.end())
        {
            m[res[i]].push_back(i + 1);
        }
        if (m.find(res[i]) == m.end())
        {
            m[res[i]].push_back(i + 1);
        }
    }
    for (auto x : m)
    {
        ans.push_back(x.second);
    }
    return ans;
}
