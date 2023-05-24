int maxDepth(Node* root) 
{
    if(!root) return 0;
    int maxi = INT_MIN;
    for(Node* it: root->children)
    maxi = max(maxi,maxDepth(it));
    if(maxi==INT_MIN) return 1;
    return maxi+1;
}