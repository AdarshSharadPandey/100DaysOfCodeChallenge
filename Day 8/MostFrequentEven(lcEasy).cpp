int mostFrequentEven(vector<int>& nums) 
{
    map<int,int>hash;   
    for(int it:nums)
        if(it%2==0)
            hash[it]++; 
    int ans=-1 ,freq=INT_MIN; 
    for(auto i: hash)
        if(i.second>freq)
            ans=i.first, freq=i.second;
    return ans;
}