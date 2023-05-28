int minExtraChar(string s, vector<string>& dictionary) 
{
    unordered_set<string> dict;
    for (string word : dictionary) dict.insert(word);
    int n = s.length();
    vector<int> dp(n + 1, INT_MAX);
    dp[0] = 0;
    for (int i = 1; i <= n; i++) 
    {
        dp[i] = dp[i - 1] + 1;
        for (int j = i; j >= 1; j--) 
        {
            string sub = s.substr(j-1,i-j+1);
            if (dict.find(sub)!=dict.end()) 
                dp[i]=min(dp[i], dp[j-1]);
        }
    }
    return dp[n];
}