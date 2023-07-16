 vector<int> smallestSufficientTeam(vector<string>& req_skills, vector<vector<string>>& people) 
{
    int n = req_skills.size(), m = people.size();
    unordered_map<string, int> skills;
    for (int i = 0; i < n; i++) skills[req_skills[i]] = i;
    vector<int> dp(1 << n, 1e9);
    vector<vector<int>> ans(1 << n);
    dp[0] = 0;
    for (int i = 0; i < m; i++) 
    {
        int p_skill = 0;
        for (auto s : people[i]) p_skill |= (1 << skills[s]);
        for (int mask = 0; mask < (1 << n); mask++) 
        {
            int new_mask = mask | p_skill;
            if (dp[mask] + 1 < dp[new_mask]) 
            {
                dp[new_mask] = dp[mask] + 1;
                ans[new_mask] = ans[mask];    
                ans[new_mask].push_back(i);
            }
        }
    } 
    return ans[(1 << n) - 1];
}