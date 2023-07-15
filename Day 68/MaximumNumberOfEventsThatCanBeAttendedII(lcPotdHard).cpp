int getNextCurr(vector<vector<int>>& events,int left,int key)
{
    int right=events.size()-1, nextCurr=events.size(), mid;
    while(left<=right)
    {
        mid=(left+right)/2;
        if(events[mid][0]>=key)
        {
            nextCurr=mid;
            right=mid-1;
        }
        else left=mid+1;
    }
    return nextCurr;
}
int maxValue(vector<vector<int>>& events, int k)
{
    sort(events.begin(),events.end());
    vector<vector<int>> dp(events.size()+1,vector<int>(k+1,0));
    for(int curr=events.size()-1;curr>=0;curr--)
    {
        for(int K=0;K<=k;K++)
        {
            int pick=0,nextCurr=getNextCurr(events,curr,events[curr][1]+1);
            if(K>0) pick=events[curr][2]+dp[nextCurr][K-1];
            int notpick=dp[curr+1][K];
            dp[curr][K]=max(pick,notpick);
        }
    }
    return dp[0][k];
}