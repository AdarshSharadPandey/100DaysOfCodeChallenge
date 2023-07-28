int helper(vector<int>& nums,int i,int j, bool flag)
{
    if(i>j) return 0;
    int ans=0;
    if(flag) ans=max(nums[i]+helper(nums,i+1,j,false),nums[j]+helper(nums,i,j-1,false));
    else ans=min(-nums[i]+helper(nums,i+1,j,true),-nums[j]+helper(nums,i,j-1,true));
    return ans;
}

bool PredictTheWinner(vector<int>& nums) 
{
    bool flag=true;
    int n=nums.size();
    int score=helper(nums,0,n-1,flag);
    if(score>=0) return true;
    return false;
}