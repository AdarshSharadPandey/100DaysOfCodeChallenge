vector<int> ans;
vector<int> postorder(Node* root) 
{
    if(root==NULL) return ans;
    for (Node* curr : root->children) postorder(curr);
    ans.push_back(root->val);
    return ans;
}