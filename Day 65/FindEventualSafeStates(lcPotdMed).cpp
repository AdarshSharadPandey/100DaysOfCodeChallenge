bool dfs(vector<vector<int>>& graph,int i,unordered_map<int,bool>& safe)
{
    if(safe.find(i) != safe.end()) return safe[i];
    safe[i] = false;
    for(int nbr : graph[i])
        if(!dfs(graph, nbr, safe))
            return false;
    safe[i] = true;
    return true;
}
vector<int> eventualSafeNodes(vector<vector<int>>& graph) 
{
    vector<int> ans;
    int n = graph.size();
    unordered_map<int,bool> safe;
    for(int i = 0; i < n; i++)
        if (dfs(graph, i, safe)) 
            ans.push_back(i);
    return ans; 
}