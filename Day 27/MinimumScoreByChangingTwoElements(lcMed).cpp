int minimizeSum(vector<int>& nums) 
{
    int n = nums.size();
    if(n==3) return 0;
    sort(nums.begin(),nums.end());
    int one=nums[n-1]-nums[2],
        two=nums[n-3]-nums[0],
        three=nums[n-2]-nums[1];
    return min({one,two,three});
}