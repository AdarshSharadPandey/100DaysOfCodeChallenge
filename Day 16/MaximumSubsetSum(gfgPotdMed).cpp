long long findMaxSubsetSum(int n, vector<int> &a) 
{
    vector<vector<long long>>dp(n+1,vector<long long>(2,0));
    for(int i=1;i<=n;i++)
    {
        dp[i][0]=dp[i][1]=INT_MIN;
        dp[i][0]=dp[i-1][1];
        dp[i][1]=max({dp[i-1][0],dp[i-1][1]})+a[i-1];
    }
    return max(dp[n][0],dp[n][1]);
}