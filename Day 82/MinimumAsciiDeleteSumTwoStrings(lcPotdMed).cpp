int helper(int m, int n, string s1, string s2, vector<vector<int>>& dp) 
{
    if(m == 0 || n == 0) return 0;
    if(dp[m][n] != -1) return dp[m][n];
    if(s1[m-1] == s2[n-1]) return dp[m][n] = 2 * int(s1[m-1]) + helper(m-1, n-1, s1, s2, dp);
    return dp[m][n] = max(helper(m-1, n, s1, s2, dp), helper(m, n-1, s1, s2, dp));
}
int minimumDeleteSum(string s1, string s2) 
{
    int m = s1.size(), n = s2.size(),ans = 0;
    vector<vector<int>> dp(m+1, vector<int>(n+1, -1));
    for(int i=0; i<m; i++) ans += int(s1[i]);
    for(int i=0; i<n; i++) ans += int(s2[i]);
    return ans - helper(m, n, s1, s2, dp);
}