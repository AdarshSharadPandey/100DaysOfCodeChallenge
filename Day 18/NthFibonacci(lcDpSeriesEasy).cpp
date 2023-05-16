int fib(int n) 
{
    if (n==0) return 0;
    if (n==1) return 1;
    int ans,x=0,y=1;
    for(int i=2;i<=n;i++)
    {
        ans=x+y;
        x=y;
        y=ans;
    }
    return ans;
}