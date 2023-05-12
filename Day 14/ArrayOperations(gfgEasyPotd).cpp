int arrayOperations(int n, vector<int> &arr) 
{
    int cnt=0,ans=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            if(i>0 && arr[i-1]!=0) ans++;
            cnt++;
        }
    }    
    if(arr[n-1]!=0) ans++;
    if(cnt == n) return 0;
    if(ans == 0) return -1;
    return ans;
}