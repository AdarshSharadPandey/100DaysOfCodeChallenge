TreeNode* prev=NULL;
int diff=INT_MAX;
int getMinimumDifference(TreeNode* root) 
{
   if(root->left)getMinimumDifference(root->left);
   if(prev)
       diff=min(diff,abs(root->val-prev->val));
    prev=root;
    if(root->right)getMinimumDifference(root->right);
    return diff;
}