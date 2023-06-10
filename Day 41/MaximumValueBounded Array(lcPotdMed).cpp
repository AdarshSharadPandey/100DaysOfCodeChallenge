int maxValue(int n, int index, int maxSum) 
{
    int l = index, r = index, ans = 1, k = n;
    int cnt = r-l+1;
    while(k+cnt <= maxSum)
    {
        if(l != 0 || r != n-1)
        {
            k += cnt;
             ans++;
            if(l-1 >= 0) l--;
            if(r+1 < n) r++;
            cnt = r+1-l;
        }
        else break;
    }
    return ans+(maxSum-k)/n;
}