vector<int> findSpiral(Node *root)
{
     vector<vector<int>>ans;
     vector<int>v;
     queue<Node*>q;
     int flag=1;
     if(root==NULL)
     return v;
     q.push(root);
     q.push(NULL);
     while(q.size()!=0)
     {
         Node*t=q.front();
         q.pop();
         if(t==NULL)
         {
             if(flag==0) flag=1;
             else
             {
                 reverse(v.begin(),v.end());
                 flag=0;
             }
             ans.push_back(v);
             v.clear();
             if(q.size()!=0)
             q.push(NULL);
         }
         else
         {
             v.push_back(t->data);
             if(t->left)
             q.push(t->left);
             if(t->right)
             q.push(t->right);
         }
        
     }
     for(int i=0;i<ans.size();i++)
         for(int j=0;j<ans[i].size();j++)
             v.push_back(ans[i][j]);
     return v;
}