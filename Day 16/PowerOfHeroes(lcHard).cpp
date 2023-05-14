int sumOfPower(vector<int>& nums) 
{
    long long ans=0, sum=0, mod=1000000007;
    sort(nums.begin(),nums.end());
    for (int i=0;i<nums.size();i++) 
    {
        ans=(ans+(sum+nums[i])*nums[i]%mod*nums[i])%mod;
        sum=(sum*2+nums[i])%mod;
    }
    return ans;
}