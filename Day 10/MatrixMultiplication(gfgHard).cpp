int matrixMultiplication(int n, int arr[])
{
    vector<vector<int>> dp(n,vector<int> (n,0));
    int i=0,j=1;
    for(i=0,j=1;i<n&&j<n;i++,j++) dp[i][j]=0;
    for(int l=2;l<n;l++)
    {
        int i = 0, j = l;
        while(j<n&&i<n)
        {
            int store=INT_MAX;
            for(int k=i+1;k<j;k++)
            {
               int val = dp[i][k] + dp[k][j];
               val+=arr[i]*arr[k]*arr[j];
               store=min(store,val);
            }
            dp[i][j]=store;
            i++;
            j++;
        }
    }
    return dp[0][n-1];
}