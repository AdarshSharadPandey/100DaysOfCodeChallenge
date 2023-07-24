void helper(Node* root, int i, vector<int> &ans)
{
    if(!root) return;
    if(ans.size() == i) ans.push_back(root->data); 
    helper(root->right, i+1, ans);
    helper(root->left, i+1, ans);
}
vector<int> rightView(Node *root)
{
   vector<int> ans;
   helper(root, 0, ans);
   return ans;
}