bool isCycle(vector<int> graph[], int i, vector<int> &vis) 
{
    if (vis[i] == 1) return true;
    if (vis[i] == 2) return false;
    if (vis[i] == 0) 
    {
        vis[i] = 1;
        for (auto edge : graph[i]) 
            if (isCycle(graph, edge, vis))
                return true;
    }
    vis[i] = 2;
    return false;
}
bool canFinish(int n, vector<vector<int>>& prerequisites) 
{
    vector<int> graph[n];
    for (auto edge : prerequisites) 
        graph[edge[1]].push_back(edge[0]);
    vector<int> vis(n, 0);
    for (int i = 0; i < n; ++i) 
        if (isCycle(graph, i, vis)) 
            return false;
    return true;
}