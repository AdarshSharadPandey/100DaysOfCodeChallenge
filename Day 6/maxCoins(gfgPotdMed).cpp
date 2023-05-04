int maxCoins(int n,vector<vector<int>> &ranges)
{
    sort(ranges.begin(), ranges.end());
    vector<int> dp(n);
    dp[n-1] = ranges[n-1][2];
    for(int i=n-2;i>=0;i--) dp[i] = max(ranges[i][2], dp[i+1]);
    int ans = INT_MIN;
    for(int i = 0; i < n; i++) 
     {
        vector<int> curr = ranges[i];
        vector<int> next = {curr[1], curr[1], -1};
        int j=lower_bound(ranges.begin(), ranges.end(), next)-ranges.begin();
        if(j<=i) j=i+1;
        int current=curr[2];
        if(j>i && j<n) current+=dp[j];
        ans=max(ans,current);
    }
    return ans;
}