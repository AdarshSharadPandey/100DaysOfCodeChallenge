vector<int> leaders(int a[], int n)
{
    vector<int>ans;
    int lead = a[n-1];
    ans.push_back(lead);
    for(int i=n-2;i >= 0;i--)
    {
        if(lead <= a[i])
        {
            lead = a[i];
            ans.push_back(a[i]);
        }
    }
    reverse(ans.begin(),ans.end());
    return ans;
}