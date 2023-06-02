bool dfs(unordered_map<int, list<int> > &adj, unordered_map<int, bool> &visited, unordered_map<int, bool> &dfsvisited, int node)
{
    visited[node] = true;
    dfsvisited[node] = true;
    for(auto i : adj[node])
	{
        if(!visited[i])
		{
            bool ans = dfs(adj, visited, dfsvisited, i);
            if(ans) return true;
        }
        else if(dfsvisited[i]) return true;
    }
    dfsvisited[node] = false;
    return false;
}
bool isCyclic(vector<vector<int>>& edges, int v, int e)
{
	unordered_map<int, list<int> > adj;
    for(int i = 0; i < e; i++)
	{
        int u = edges[i][0];
        int v = edges[i][1];
        adj[u].push_back(v);
    }
    unordered_map<int, bool> visited;
    unordered_map<int, bool> dfsvisited;
    for(int i = 0; i < v; i++)
	{
        if(!visited[i] )
		{
            bool ans = dfs(adj, visited, dfsvisited, i);
            if(ans) return true;
        }
    }
    return false;
}