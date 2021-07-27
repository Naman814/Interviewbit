/* Two methods - same logic , just different way of doing

vector<int>plusOne(vector<int> &A) {
    int n=A.size();
    vector<int> ans;
    int sum=0,carry=0;
    int count=0;
    for(int i=0;i<n;i++){
        if(A[i]==0){
            count++;
        }
        else{
            break;
        }
    }
    A.erase(A.begin(),A.begin()+count);
    if(A.empty()){
        ans.push_back(1);
        return ans;
    }
    reverse(A.begin(),A.end());
    sum=A[0]+1;
    ans.push_back(sum%10);
    carry=sum/10;
    for(int i=1;i<A.size();i++){
        sum=A[i]+carry;
        ans.push_back(sum%10);
        carry=sum/10;
    }
    while(carry){
        ans.push_back(carry%10);
        carry=carry/10;
    }
    reverse(ans.begin(),ans.end());
    return ans;

}

Method 2 : 
vector<int> Solution::plusOne(vector<int> &A) {
    int n=A.size(),carry=0;
    vector<int>res;
    res.push_back((1+A[n-1])%10);
    carry=(1+A[n-1])/10;
    for(int i=n-2;i>=0;i--){
        res.push_back((carry+A[i])%10);
        carry=(carry+A[i])/10;
    }
    if(carry)
     res.push_back(carry);
    int x=res.size();
    for(int i=0;i<x/2;i++)
     swap(res[i],res[x-i-1]);
    while(res[0]==0){
       res.erase(res.begin());
    }
    return res;
}

*/


