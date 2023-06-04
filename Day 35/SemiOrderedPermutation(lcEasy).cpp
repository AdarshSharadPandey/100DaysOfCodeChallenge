int semiOrderedPermutation(vector<int>& nums) 
{
    int f=0,l=0,n=nums.size();
    for (int i = 0; i < n; i++) 
        if (nums[i] == 1)
            f = i;
    int cnt = 0;
    while (f != 0) 
    {
        int temp = nums[f];
        nums[f] = nums[f - 1];
        nums[f - 1] = temp;
        f--;
        cnt++;
    }
    for (int i = 0; i < n; i++) 
        if (nums[i] == n)
            l = i;
    return cnt + (n - 1) - l;
}