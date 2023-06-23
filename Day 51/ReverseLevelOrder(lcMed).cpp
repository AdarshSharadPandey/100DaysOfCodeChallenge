vector<vector<int>> levelOrderBottom(TreeNode* root) 
{
    if(root==NULL) return {};
    vector<vector<int>>res;
    queue<TreeNode*>q;
    q.push(root);
    while(q.empty()==false)
    {
        int count=q.size();
        vector<int> v;
        for(int i=0;i<count;i++)
        {
            TreeNode *curr=q.front();
            q.pop();
            if(curr->left!=NULL) q.push(curr->left);
            if(curr->right!=NULL) q.push(curr->right);
            v.push_back(curr->val);
        }
        res.push_back(v);
    }
    reverse(res.begin(),res.end());
    return res;
}