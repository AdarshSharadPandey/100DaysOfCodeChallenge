int cutRod(int price[], int n) 
{
    vector<int> dp(n+1,0);
    for(int i=1; i<=n; i++)
    {
        dp[i] = price[i-1];
        for(int j = 1; j < i; j++)
            dp[i] = max(dp[i],dp[j]+dp[i-j]);
    }
    return dp[n];
}