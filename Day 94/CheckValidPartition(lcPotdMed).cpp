bool validPrefix(int index, vector<int> &nums, vector<int> &dp)
{
    if (index < 0)
        return 1;
    if (dp[index] != -1)
        return dp[index];
    bool twoIdentical = 0;
    bool threeIdentical = 0;
    bool increasingSeq = 0;
    if (index > 0 && nums[index] == nums[index - 1])
        twoIdentical = validPrefix(index - 2, nums, dp);
    if (index > 1 && nums[index] == nums[index - 1] && nums[index - 1] == nums[index - 2])
        threeIdentical = validPrefix(index - 3, nums, dp);
    if (index > 1 && nums[index] == nums[index - 1] + 1 && nums[index - 1] == nums[index - 2] + 1)
        increasingSeq = validPrefix(index - 3, nums, dp);
    return dp[index] = twoIdentical || threeIdentical || increasingSeq;
}
bool validPartition(vector<int> &nums)
{
    int n = nums.size();
    vector<int> dp(n, -1);
    return validPrefix(n - 1, nums, dp);
}