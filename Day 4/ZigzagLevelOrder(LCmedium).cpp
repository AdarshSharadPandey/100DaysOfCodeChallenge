vector<vector<int>> zigzagLevelOrder(TreeNode* root) 
{
    vector<vector<int>> ans;
    queue<TreeNode*> q;
    if(!root) return ans;
    q.push(root);
    int cnt = 1;
    while(!q.empty())
    {
        int n = q.size();
        vector<int> temp;
        for( int i = 0; i < n; i++ )
        {
            TreeNode* curr = q.front();
            if(curr->left) q.push(curr->left);
            if(curr->right ) q.push(curr->right);
            temp.push_back(curr->val);
            q.pop();
        }
        if(cnt%2==0) reverse(temp.begin(),temp.end());
        ans.push_back(temp);
        cnt++;
    }
    return ans;
}