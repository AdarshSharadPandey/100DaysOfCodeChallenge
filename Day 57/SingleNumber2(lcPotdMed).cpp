int singleNumber(vector<int>& nums) 
{
    for(int i=0;i<nums.size();i++)
    {
        int count=0;
        for(int j=0;j<nums.size();j++)
            if(nums[j]==nums[i]) 
                count++;
        if(count==1) return nums[i];
    }
    return -1;
}