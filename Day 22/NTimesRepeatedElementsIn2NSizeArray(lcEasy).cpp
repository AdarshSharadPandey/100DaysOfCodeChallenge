int repeatedNTimes(vector<int>& nums) 
{
    int n=nums.size();
    unordered_map<int,int>hash;
    for(int i=0;i<n;i++)
        hash[nums[i]]++;
    for(auto i:hash)
    {
        if(i.second>= n/2)
            return i.first;
    }
    return 0;
}