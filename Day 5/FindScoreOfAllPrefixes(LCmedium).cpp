vector<long long> findPrefixScore(vector<int>& nums)
{
    vector<long long > ans(nums.size());
    int maxi=-1;
    for(int i=0;i<nums.size();i++)
    {
        maxi=max(maxi,nums[i]);
        ans[i]=nums[i]+maxi;
        if(i>0) ans[i]+=ans[i-1];
    }
    return ans;
}