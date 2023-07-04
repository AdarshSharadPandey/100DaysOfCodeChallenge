int countSubArrayProductLessThanK(vector<int>& a, int n, long long k) 
{
    long long ans = 0, start = 0, p = 1;
    for(int i = 0; i< n;i++)
    {
        p*= a[i];
        while(p>=k && start<=i)
        {
            p/= a[start];
            start+=1;
        }
        ans += i+1-start;
    }
    return ans;
}