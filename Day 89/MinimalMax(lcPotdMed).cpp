int minimizeMax(vector<int>& nums, int p) 
{
    sort(nums.begin(), nums.end());
    int n = nums.size(), l = 0 , r = nums.back() - nums.front();
    while (l < r) 
    {
        int m = l + (r - l) / 2, cnt = 0;
        for (int i = 1; i < n; i++) 
        {
            if (nums[i] - nums[i - 1] <= m) 
            {
                cnt++;
                i++;
            }
        }
        if (cnt < p) l = m + 1;
        else r = m;
    }
    return l;
}