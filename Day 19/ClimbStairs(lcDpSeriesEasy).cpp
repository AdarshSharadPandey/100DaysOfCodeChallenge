int climbStairs(int n) 
{
    if(n==0) return 0;
    if(n==1) return 1;
    int x = 1;
    int y = 1;
    int ans;
    for(int i=2;i<=n;i++)
        ans=x+y,x=y,y=ans;
    return ans;
}