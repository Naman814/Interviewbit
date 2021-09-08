 void levelOrder(TreeNode* A, vector<int> &v){
     queue<TreeNode*> q;
     q.push(A);
     while(!q.empty()){
         A=q.front();
         v.push_back(A->val);
         q.pop();
         if(A->right){
             q.push(A->right);
         }
         if(A->left){
             q.push(A->left);
         }
     }
     reverse(v.begin(),v.end());

 }
vector<int> Solution::solve(TreeNode* A) {
    vector<int> v;
    levelOrder(A,v);
    return v;
}
