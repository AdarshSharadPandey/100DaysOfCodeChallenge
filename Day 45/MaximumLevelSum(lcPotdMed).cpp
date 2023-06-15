int maxLevelSum(TreeNode* root) 
{
    int sum = INT_MIN, ans, level = 1;
    queue<TreeNode*> q;
    q.push(root);
    while(q.size())
    {
        int n = q.size(), curr = 0;
        while(n--)
        {
            TreeNode* temp = q.front(); q.pop();
            curr += temp -> val;
            if(temp -> left) q.push(temp -> left);
            if(temp -> right) q.push(temp -> right);
        }
        if(curr > sum) sum = curr, ans = level;
        level++;
    }
    return ans;
}