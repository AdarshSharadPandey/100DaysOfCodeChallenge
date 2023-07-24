double helper(double x ,long n)
{
    if(n==0) return 1;
    if((n%2==0)) return helper(x*x,n/2); 
    return x*helper(x,n-1); 
}
double myPow(double x, int n) 
{
    if(n==0) return 1;
    long l=abs((long)n);
    double ans=helper(x,l);
    if(n>0) return ans;
    else return 1/ans;
}