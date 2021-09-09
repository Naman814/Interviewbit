// STL max heap
vector<int> Solution::solve(vector<int> &A, int B)
{
    priority_queue<int> q;
    vector<int> res;
    for (int i = 0; i < A.size(); i++)
    {
        q.push(A[i]);
    }
    for (int i = 0; i < B; i++)
    {
        res.push_back(q.top());
        q.pop();
    }
    return res;
}
