vector<int> rightSideView(TreeNode* root) 
{
    if(!root) return {};
    vector<int> ans;
    int n;
    TreeNode* temp;
    queue<TreeNode*> q;
    q.push(root);
    while(!q.empty())
    {
        n=q.size();
        for(int i=0;i<n;i++)
        {
            temp=q.front();
            q.pop();
            if(temp->left)q.push(temp->left);
            if(temp->right)q.push(temp->right);
        }
        ans.push_back(temp->val);
    }
    return ans;
} 