int numOfMinutes(int n, int headID, vector<int>& manager, vector<int>& informTime) 
{
    vector<vector<int>> hash(n);
    for(int i = 0; i<manager.size(); i++) 
        if(i != headID) 
            hash[manager[i]].push_back(i);
    queue<pair<int, int>> q;
    q.push({headID, 0});
    int output = 0;
    while(!q.empty()) 
    {
        auto [u, timestamp] = q.front(); q.pop();
        output = max(output, timestamp);
        for(int v : hash[u])
            q.push({v, timestamp + informTime[u]});
    }
    return output;
}