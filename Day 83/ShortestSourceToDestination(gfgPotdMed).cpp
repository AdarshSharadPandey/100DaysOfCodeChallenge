int shortestDistance(int N, int M, vector<vector<int>> A, int X, int Y) 
{
    queue<pair<int,pair<int,int>>> q;
    q.push({0,{0,0}});
    int drow[]={-1,1,0,0};
    int dcol[]={0,0,1,-1};
    while(q.size() != 0)
    {
        auto temp=q.front();
        q.pop();
        int dis=temp.first;
        int i=temp.second.first;
        int j=temp.second.second;
        if(i==X && j==Y)
            return dis;
        for(int k=0;k<4;k++)
        {
            int new_row=i+drow[k];
            int new_col=j+dcol[k];
            if(new_row>=0 && new_col>=0 && new_row<N && new_col<M && A[new_row][new_col]==1)
            {
                A[new_row][new_col]=0;
                q.push({dis+1,{new_row,new_col}});
            }
        }
        
    }
    return -1;
}