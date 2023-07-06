int stockBuyAndSell(int n, vector<int> &prices) 
{
    int profit=0,buy=0,sell=0;
    for(int i=1;i<n;i++)
    {
        if(prices[i]>=prices[i-1]) sell++;
        else
        {
            profit+=(prices[sell]-prices[buy]);
            buy=sell=i;
        }
    }
    profit+=(prices[sell]-prices[buy]);
    return profit;
}