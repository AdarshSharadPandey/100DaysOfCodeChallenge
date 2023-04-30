int maxi=INT_MIN;
int sum(TreeNode* curr)
{
	if(!curr) return 0;
	int leftSum=max(0,sum(curr->left));
	int rightSum=max(0,sum(curr->right));
  	maxi=max(maxi,curr->val+leftSum+rightSum);
    return curr->val+max(leftSum,rightSum);
}
int maxPathSum(TreeNode* root) 
{
    int temp=sum(root);
	return maxi;
}