int helper(Node *root, int k, unordered_set<int> &hash) 
{
    if(!root) return 0;
    unordered_set<int> leftHash, rightHash;
    int left = helper(root->left, k, leftHash);
    int right = helper(root->right, k, rightHash);
    hash = leftHash;
    hash.insert(rightHash.begin(),rightHash.end());
    hash.insert(root->data);
    if(hash.size()<= k) return left+right+1;
    return left+right; 
}
int goodSubtrees(Node *root, int k)
{
    unordered_set<int> hash;
    return helper(root,k,hash);
}