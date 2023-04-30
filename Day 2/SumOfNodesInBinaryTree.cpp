void dfs(TreeNode *root, int &ans , int temp)
{
    if(!root->left && !root->right)
    {
        temp=temp*10 + root->val;
        ans+=temp;
        return;
    }
    temp = temp*10 + root->val;
    if(root->left) dfs(root->left,ans,temp);
    if(root->right) dfs(root->right,ans,temp);
}

int sumNumbers(TreeNode* root) 
{
    int ans =0;
    dfs(root,ans,0);
    return ans;
}