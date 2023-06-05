int minDiff(Node *root, int K)
{
    int mini = INT_MAX;
    queue<Node*> q;
    q.push(root);
    while(!q.empty()) 
    {
        Node* front = q.front();
        q.pop();
        if(front->left!=NULL) q.push(front->left);
        if(front->right!=NULL) q.push(front->right);
        mini = min(mini, abs(front->data - K));
        
    }
    return mini;
}