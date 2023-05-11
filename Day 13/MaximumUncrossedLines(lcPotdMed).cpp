int maxUncrossedLines(vector<int>& nums1, vector<int>& nums2) 
{
    int m=nums1.size(),n=nums2.size();
    int dp[m+1][n+1];
    for(int i=0;i<m+1;i++) dp[i][0]=0;
    for(int i=0;i<n+1;i++) dp[0][i]=0;
    for(int i=1;i<m+1;i++)
    {
        for(int j=1;j<n+1;j++)
        {
           if(nums1[i-1]==nums2[j-1]) dp[i][j]= 1+dp[i-1][j-1];
           else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
        }
    }
    return dp[m][n];
}