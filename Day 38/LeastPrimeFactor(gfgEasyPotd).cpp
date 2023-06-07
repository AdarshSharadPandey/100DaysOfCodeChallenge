vector<int> leastPrimeFactor(int n) 
{
    vector<int> ans(n+1,0);
    ans[1] = 1;
    for(int i=2; i<=n; i++)
    {
        if(ans[i] == 0)
        {
            ans[i] = i;
            for(int j=i*2; j<=n; j+=i)
                if(ans[j] == 0 && j%i == 0)
                    ans[j] = i;
        }
    }
    return ans;
}