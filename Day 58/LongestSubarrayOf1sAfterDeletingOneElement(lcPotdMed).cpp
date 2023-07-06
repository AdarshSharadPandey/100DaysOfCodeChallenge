int longestSubarray(vector<int>& nums) 
{
    int temp = -1, maxi = 0, n = nums.size();
    for (int left=0, right=0; right<n; right++) 
    {
        if (nums[right] == 0) 
        {
            if (temp == -1) temp = right;
            else 
            {
                left = temp + 1;
                temp = right;
            }
        }
        maxi = max(maxi, right-left);
    }
    return maxi;
}