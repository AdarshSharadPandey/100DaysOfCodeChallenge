vector<int> bfsOfGraph(int V, vector<int> adj[]) 
{
    vector<int> ans;
    queue<int>q;
    q.push(0);
    map<int,int> vis;
    vis[0]=1;
    while(!q.empty())
    {
        int top=q.front();
        q.pop();
        ans.push_back(top);
        for(auto child:adj[top])
        {
            if(!vis[child])
            {
                vis[child]=1;
                q.push(child);
            }
        }
    }
    return ans;
}