#include <bits/stdc++.h>
using namespace std;

vector<int> rotateArray(vector<int> &A, int B)
{
    vector<int> ret;
    for (int i = 0; i < A.size(); i++)
    {
        ret.push_back(A[(i + B) % A.size()]);
    }
    return ret;
}

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int B;
    cin >> B;
    vector<int> ret = rotateArray(v, B);
    for (int i = 0; i < v.size(); i++)
    {
        cout << ret[i] << " ";
    }
    return 0;
}