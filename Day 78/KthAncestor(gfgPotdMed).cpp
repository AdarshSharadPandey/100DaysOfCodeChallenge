bool helper(Node* root, int target, vector<int> &parents)
{
    if(root==NULL) return false;
    parents.push_back(root->data);
    if(root->data == target) return true;
    if(helper(root->left,target,parents) || helper(root->right,target,parents)) return true;
    parents.pop_back();
    return false;
}

int kthAncestor(Node *root, int k, int node)
{
    vector<int> parents;
    helper(root,node,parents);
    int n = parents.size();
    if(n>k) return parents[n-k-1];
    return -1;
}