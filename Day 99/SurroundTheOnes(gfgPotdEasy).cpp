int Count(vector<vector<int> >& matrix) 
{
    int n=matrix.size(),m=matrix[0].size();
    int ans=0;
    for(int i=0;i<matrix.size();i++)
    {
        for(int j=0;j<matrix[0].size();j++)
        {
            if(matrix[i][j]==1)
            {
                int cnt=0;
                if(i>0 && matrix[i-1][j]==0) cnt++; 
                if(i>0 && j>0 && matrix[i-1][j-1]==0) cnt++; 
                if(i>0 && j<m-1 && matrix[i-1][j+1]==0) cnt++; 
                if(j>0 && matrix[i][j-1]==0) cnt++; 
                if(j>0 && i<n-1 && matrix[i+1][j-1]==0) cnt++; 
                if(i<n-1 && matrix[i+1][j]==0) cnt++; 
                if(i<n-1 && j<m-1 && matrix[i+1][j+1]==0) cnt++; 
                if(j<m-1 && matrix[i][j+1]==0) cnt++; 
                if(cnt>0 && cnt%2==0) ans++;
            }
        }
    }
    return ans;
}