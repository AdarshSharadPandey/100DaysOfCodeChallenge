int helper(int i , int j , string &str , vector<vector<int>>&dp)
{
    if( i >= str.size() || j >= str.size())return 0 ;
    if(dp[i][j]!=-1)return dp[i][j];
    if(str[i] == str[j] && i != j)
        return 1 + helper(i + 1, j + 1 , str , dp);
    return dp[i][j]= max(helper(i+1 , j , str , dp) , helper(i , j+1 , str , dp));
}
int LongestRepeatingSubsequence(string &str)
{
    vector<vector<int>>dp(str.size(), vector<int>(str.size() , -1));
   return helper(0 , 0 , str , dp);
}