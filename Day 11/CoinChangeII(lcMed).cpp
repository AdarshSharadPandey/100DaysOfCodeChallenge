int sol(int ind,int amount, vector<int>& coins,vector<vector<int>> &dp)
{
    if(ind==0) return (amount%coins[0]==0);
    if( dp[ind][amount]!=-1)return dp[ind][amount];
    int notpick=sol(ind-1,amount,coins,dp);
    int pick=0;
    if(coins[ind]<=amount) pick=sol(ind,amount-coins[ind],coins,dp);
    return dp[ind][amount]=pick+notpick;
}
int change(int amount, vector<int>& coins) 
{
    int ind=coins.size();
    vector<vector<int>> dp(ind,vector<int>(amount+1,-1));
        return sol(ind-1,amount,coins,dp);
}