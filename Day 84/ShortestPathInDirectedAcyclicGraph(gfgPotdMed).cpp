vector<int> shortestPath(int N,int M, vector<vector<int>>& edges)
{
    unordered_map<int,list<pair<int,int>>>adj;
    vector<int>dis(N,1e9);
    for(auto it:edges)
    {
        adj[it[0]].push_back({it[1],it[2]});
    }
    queue<int>q;
    dis[0] = 0;
    q.push(0);
    while(!q.empty())
    {
        auto it=q.front();
        q.pop();
        for(auto x:adj[it])
        {
            if(dis[it] + x.second < dis[x.first])
            {
                dis[x.first] = dis[it]+x.second;
                q.push(x.first);
            }
        }
    }
    for(int i=0;i<N;i++)
    {
        if(dis[i] == 1e9) 
            dis[i] = -1;
    }
    return dis;
}