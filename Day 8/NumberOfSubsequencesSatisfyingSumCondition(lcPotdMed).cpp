int numSubseq(vector<int>& nums, int target) 
{
    sort(nums.begin(),nums.end());
    int ans=0, n=nums.size(), low=0, high=n-1, mod=1e9+7;
    vector<int> temp(n,1);
    for (int i=1;i<n;i++) temp[i]=temp[i-1]*2%mod;
    while (low<=high) 
    {
        if (nums[low]+nums[high]>target) high--;
        else ans = (ans+temp[high-low++])%mod;
    }
    return ans;
}