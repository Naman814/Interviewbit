TreeNode* invert(TreeNode* root){
    if(!root){
        return NULL;
    }
    if(root->left && root->right){
        TreeNode *temp=root->left;
        root->left=root->right;
        root->right=temp;
    }
    TreeNode* x=invert(root->left);
    TreeNode* y=invert(root->right);
    
    return root;
    
}

TreeNode* Solution::invertTree(TreeNode* A) {
    return invert(A);
}
