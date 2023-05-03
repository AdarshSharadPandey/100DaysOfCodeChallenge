TreeNode* replaceValueInTree(TreeNode* root) 
{
    queue<TreeNode*> q;
    q.push(root);
    vector<int> v;
    int nodeVal=root->val;
    while(!q.empty())
    {
        int n=q.size(),sum=0;
        for(int i=0;i<n;i++)
        {
            TreeNode* p=q.front(); 
            q.pop();
            p->val=nodeVal-p->val;
            if(p->left){  q.push(p->left); sum+=p->left->val; }
            if(p->right) { q.push(p->right); sum+=p->right->val; }
            if(p->left && p->right)
            {
                int x=p->right->val+p->left->val;
                p->left->val=x;
                p->right->val=x;
            }
        }
        nodeVal=sum;
    }
    return root;
}
