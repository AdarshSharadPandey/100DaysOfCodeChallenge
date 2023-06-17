long long minCost(vector<int>& v, int x) 
{
    int n = v.size();
    for (int i=0;i<n;++i) v.push_back(v[i]);
    vector<vector<int> > dp(n + n, vector<int>(n + n, (int)1e9 + 5));
    for (int i=0;i<n+n;++i) dp[i][i] = v[i];
    for (int i=0;i<n+n;++i) 
        for (int j=i+1;j<n+n;++j) 
            dp[i][j] = min(dp[i][j-1], v[j]);
    long long ans = ((long long)1e9) * n;
    for (int k=0;k<n;++k) 
    {
        long long cost = 0;
        for (int i=0;i<n;++i)  cost += dp[i][i + k];
        cost += x * 1LL * k;
        ans = min(ans, cost);
    }
    return ans;
}