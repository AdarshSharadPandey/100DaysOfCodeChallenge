int arraySign(vector<int>& nums) 
{
    int ans;
    if(nums[0]==0) ans=0;
    else if(nums[0]>0) ans=1;
    else ans=-1;
    for(int i=1;i<nums.size();i++)
    {
        if(nums[i]==0) ans*=0;
        else if(nums[i]>0) ans*=1;
        else ans*=-1;
    }
    return ans;
}