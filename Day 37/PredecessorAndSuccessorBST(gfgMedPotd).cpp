void helper(Node* root,Node* &pre,Node* &suc,int x)
{
    if(root==NULL) return;
    if(root->key==x)
    {
        helper(root->left,pre,suc,x);
        helper(root->right,pre,suc,x);
    }
    else if(root->key<x)
    {
        pre = root;
        helper(root->right,pre,suc,x);
    }
    else if(root->key>x)
    {
        suc = root;
        helper(root->left,pre,suc,x);
    }
}
void findPreSuc(Node* root, Node*& pre, Node*& suc, int key)
{
    pre = NULL, suc = NULL;
    helper(root,pre,suc,key);
}