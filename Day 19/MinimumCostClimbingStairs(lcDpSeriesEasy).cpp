int minCostClimbingStairs(vector<int>& cost) 
{
    int n=cost.size();
    return minCost(cost,n);
}
int minCost(vector<int> cost,int n)
{
    int x = cost[0];
    int y = cost[1];
    int curr;
    for(int i=2;i<n;i++)
    {
        curr = min(x,y)+cost[i];
        x=y,y=curr;
    }
    return min(x,y);
}