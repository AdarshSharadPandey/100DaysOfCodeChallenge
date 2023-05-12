long long mostPoints(vector<vector<int>>& questions) 
{
    int n=questions.size();
    vector<long long> dp(n+1, 0);
    for(int i=n-1; i>=0 ;i--)
    {
        int point=questions[i][0],jump=questions[i][1];
        int nextQuestion=min(n, i+jump+1);
        dp[i]=max(dp[i+1],point+dp[nextQuestion]);
    }
    return dp[0];
}