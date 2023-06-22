int helper(vector<int>&v,int buy,int index,vector<vector<int>>&dp,int fee)
{
    if(index==v.size()) return 0;
    if(dp[index][buy]!=-1) return dp[index][buy];
    int profit=0;
    if(buy!=0)
    {
        int buy= -v[index]+helper(v,0,index+1,dp,fee); 
        int not_buy=helper(v,1,index+1,dp,fee);
        profit=max(buy,not_buy);
    }
    else
    {
        int sell=v[index]-fee+helper(v,1,index+1,dp,fee);
        int not_sell=helper(v,0,index+1,dp,fee);
        profit=max(sell,not_sell);
    }
    return dp[index][buy]=profit;
}
int maxProfit(vector<int>& prices, int fee) 
{
    vector<vector<int>> dp(prices.size(),vector<int>(2,-1));
    return helper(prices,1,0,dp,fee);
}