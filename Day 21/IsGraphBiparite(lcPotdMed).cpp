bool bfs(int c,int s,vector<int>& color , vector<vector<int>>& graph)
{
      queue<int> q;
      q.push(s);
      while(!q.empty())
      {
          int node = q.front();
          q.pop();
          for(auto it:graph[node])
          {
              if(color[it] == -1)
              {
                  color[it] = !color[node];
                  q.push(it);
              }
              else if(color[it] == color[node]) return false;
          }
      }
      return true;  
}
bool isBipartite(vector<vector<int>>& graph) 
{
      int n = graph.size();
      vector<int> color(n,-1);
       for(int i=0;i<n;i++)
           if(!bfs(0,i,color,graph)) 
               return false;
    return true;
}