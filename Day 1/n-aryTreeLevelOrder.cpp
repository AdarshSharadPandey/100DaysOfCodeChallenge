vector<vector<int>> levelOrder(Node* root) 
{
    vector<vector<int>> ans;
    if(!root) return ans;
    queue<Node*>q;
    q.push(root);
    while(!q.empty())
    {
        int n=q.size();
        vector<int> v;
        while(n--)
        {
            Node *curr=q.front();
            q.pop();       
            v.push_back(curr->val);
            for(auto it:curr->children) q.push(it);
        }
        ans.push_back(v);
    }
    return ans;
}