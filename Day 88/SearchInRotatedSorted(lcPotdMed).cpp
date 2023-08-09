int search(vector<int>& nums, int target) 
{
    int l=0,r=nums.size()-1;
    while(l<=r)
    {
        int m=(l+r)/2;
        if(nums[m]==target) return m;
        if(nums[m]>=nums[l])
        {
            if(target>=nums[l] && nums[m]>=target)r=m-1;
            else l=m+1;
        }
        else 
        {
            if(nums[r]>=target && nums[m]<=target)l=m+1;
            else r=m-1;
        }
    }
    return -1;
}