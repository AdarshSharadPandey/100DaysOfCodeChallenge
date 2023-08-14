vector<int> singleNumber(vector<int> nums) 
{
    int resXOR = 0;
    for(int i=0;i<nums.size(); i++)
        resXOR ^= nums[i];
    int rightMost = resXOR & -resXOR;
    int num1 = 0, num2 = 0;
    for(int i=0; i < nums.size(); i++)
    {
        if(nums[i] & rightMost) num1 ^= nums[i];
        else num2 ^= nums[i];
    }
    vector<int> v(2);
    if(num1 < num2)
    {
        v[0] = num1;
        v[1] = num2;
    }
    else
    {
        v[0] = num2;
        v[1] = num1;
    }
    return v;
}