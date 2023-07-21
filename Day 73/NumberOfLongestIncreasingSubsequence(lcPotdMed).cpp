pair<int, int> helper(vector<int>&nums, vector<int>&length, vector<int>&count, int currIdx)
{
    if (length[currIdx] != -1) return {length[currIdx], count[currIdx]};
    int LISLen = 1, LISCount = 1;
    for (int i = currIdx + 1; i < nums.size(); i++)
    {
        if (nums[i] > nums[currIdx])
        {
            pair<int, int>nextLenCount = helper(nums, length, count, i);
            int currLen = 1 + nextLenCount.first; 
            if (currLen > LISLen)
            {
                LISLen = currLen;
                LISCount = nextLenCount.second; 
            }
            else if (currLen == LISLen) 
                LISCount = LISCount + nextLenCount.second;
        }
    }
    length[currIdx] = LISLen; count[currIdx] = LISCount;
    return {LISLen, LISCount};
}
int findNumberOfLIS(vector<int>& nums) 
{
    int n = nums.size(), maxLISLen = 1;
    unordered_map<int, int> hash;
    vector<int>length(n, -1), count(n, -1);
    for (int start = 0; start < n; start++)
    {
        pair<int, int>lenCountPair  = helper(nums, length, count, start);
        int LISLen = lenCountPair.first, LISCount = lenCountPair.second;
        hash[LISLen] += LISCount;
        maxLISLen = max(maxLISLen, LISLen);
    }
    return hash[maxLISLen];
    
}