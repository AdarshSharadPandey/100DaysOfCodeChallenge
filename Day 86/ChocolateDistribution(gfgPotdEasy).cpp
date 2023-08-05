long long findMinDiff(vector<long long> a, long long n, long long m)
{
    long long i=0,j=m-1 ;
    long long diff=0,ans=INT_MAX ;
    sort(a.begin(),a.end()) ;
    while(j<n)
    {
        diff = a[j] - a[i] ;
        ans = min(diff,ans) ;
        i++;
        j++ ;
    }
    return ans ;  
}