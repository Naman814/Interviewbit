int Solution::singleNumber(const vector<int> &A)
{
    int one = 0, two = 0;
    for (auto x : A)
    {
        one = (one ^ x) & (~two);
        two = (two ^ x) & (~one);
    }
    return one;
}
