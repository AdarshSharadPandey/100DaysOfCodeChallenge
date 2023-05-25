Node* connect(Node* root) 
{
    if(root == NULL) return root;
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty())
    {
        Node* temp = q.front();
        q.pop();
        if(temp == NULL && !q.empty()) q.push(NULL);
        else if(temp!=NULL)
        {
            temp->next = q.front();
            if(temp->left) q.push(temp->left);
            if(temp->right) q.push(temp->right);
        }
    }
    
    return root;
}