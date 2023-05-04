int evaluatePolynomialExpression(int n,int poly[],int x)
{
    unsigned long long sum=0, mod=1000000007;
    for(int i=0;i<n;i++)
        sum=(sum*x+poly[i])%mod;
    return sum;
}