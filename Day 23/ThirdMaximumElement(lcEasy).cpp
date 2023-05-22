int thirdMax(vector<int>& nums) 
{
    sort(nums.rbegin(),nums.rend());
    unordered_set<int> hash;
    for(int i=0;i<nums.size();i++)
    {
        hash.insert(nums[i]);
        if(hash.size()==3) 
            return nums[i];
    }
    return nums[0];
}