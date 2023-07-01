void helper(vector<int>& cookies,vector<int>& dp,int k,int &ans,int index)
{
    int n = cookies.size();
    if(index == n)
    {
        int temp = INT_MIN;
        for(int i=0;i<dp.size();i++) temp = max(dp[i],temp);
        ans = min(ans,temp);
        return;
    }
    for(int i=0;i<k;i++)
    {
        dp[i]+=cookies[index];
        helper(cookies,dp,k,ans,index+1);
        dp[i]-=cookies[index];
    }
}   
int distributeCookies(vector<int>& cookies, int k)
{
    vector<int> dp(k,0);
    int ans=INT_MAX;
    helper(cookies,dp,k,ans,0);
    return ans;
}