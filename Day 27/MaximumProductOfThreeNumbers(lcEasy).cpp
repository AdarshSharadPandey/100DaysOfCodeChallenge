int maximumProduct(vector<int>& nums) 
{
    sort(nums.begin(), nums.end());
    int n=nums.size(), 
        temp1=nums[n-1]*nums[n-2]*nums[n-3], 
        temp2=nums[0]*nums[1]*nums[n-1];
    return max(temp1,temp2);
}