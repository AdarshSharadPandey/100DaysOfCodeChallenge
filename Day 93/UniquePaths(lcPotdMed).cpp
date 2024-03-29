int uniquePathsWithObstacles(vector<vector<int>>&v) 
{
    int m = v.size(),n =v[0].size();
    if(v[0][0] || v[m-1][n-1])return 0;
    vector<vector<int>>dp(m,vector<int>(n,0));
    dp[0][0]=1;
    for(int i=1;i<m;i++)
    {
        if(v[i][0]) dp[i][0]=0;
        else dp[i][0]=dp[i-1][0];
    }
    for(int i=1;i<n;i++)
    {
        if(v[0][i]) dp[0][i]=0;
        else dp[0][i]=dp[0][i-1];
    }
    for(int i=1;i<m;i++)
        for(int j=1;j<n;j++)
            if(!v[i][j])
                dp[i][j]=dp[i-1][j]+dp[i][j-1];
    return dp[m-1][n-1];
}