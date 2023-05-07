void helper(int i,int &n,vector<int> &temp,vector<vector<int>> &ans,vector<int> &num)
{
    ans.push_back(temp);
    if(i>n)return;
    for(int j = i; j < n; j++)
    {
        temp.push_back(num[j]);
        helper(j+1,n,temp,ans,num);
        while(j<n-1&&num[j]==num[j+1])j++;
        temp.pop_back();
    }
}    
vector<vector<int>> subsetsWithDup(vector<int>& nums) 
{
    vector<vector<int>> ans;
    vector<int> temp;
    int n = nums.size();
    sort(nums.begin(),nums.end());
    helper(0,n,temp,ans,nums);
    return ans;
}