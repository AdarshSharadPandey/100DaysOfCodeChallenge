vector<int> findDisappearedNumbers(vector<int>& nums) 
{
    vector<int>ans;
    unordered_map<int,int> hash;
    for(int i=1;i<=nums.size();++i) hash[i]++;
    for(auto value:nums) hash[value]++;
    for(auto value:hash)
        if(value.second==1)
            ans.push_back(value.first);
    return ans;
}