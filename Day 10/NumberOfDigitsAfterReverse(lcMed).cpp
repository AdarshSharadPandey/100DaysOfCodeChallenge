long reverse(int n)
{
    long rev=0;
    while(n>0)
    {
        rev=rev*10+(n%10);
        n/=10;
    }
    return rev;
}
int countDistinctIntegers(vector<int>& nums) 
{
    int n = nums.size();
    unordered_set <int>  s;
    for(int i = 0; i < n; i++)
    {
        s.insert(nums[i]);
        long temp=reverse(nums[i]);
        s.insert(temp);
    }
    return s.size();
}