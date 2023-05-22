int solve(int N, vector<int> p)
{
    int i,ans=N-1;
    vector<int>degree(N+1,0);
    for(i=1;i<N;i++)
    {
        degree[p[i]]++;
        degree[i]++;
    }
    for(i=0;i<N;i++)  if(degree[i]==1)ans--;
    if(ans<0)  return 0;
    return ans;
}