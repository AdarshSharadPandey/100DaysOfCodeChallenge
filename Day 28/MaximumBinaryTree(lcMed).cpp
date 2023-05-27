TreeNode* constructMaximumBinaryTree(vector<int>& nums) 
{
    map<int, TreeNode*> q;
    for (int num : nums) 
    {
        auto it = q.insert({ num, new TreeNode(num) }).first;
        if (it != q.begin()) 
        {
            it->second->left = next(it, -1)->second;
            q.erase(q.begin(), it);
        }
        if (next(it, 1) != q.end()) next(it, 1)->second->right = it->second;
    }
    return q.rbegin()->second;

}