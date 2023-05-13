vector<int> getSubarrayBeauty(vector<int>&nums, int k, int x) 
{
    int i=0,j=0,n=nums.size();
    vector<int> temp(51,0),ans;
    while(j<n)
    {
        if(nums[j]<0)
        temp[(nums[j]+50)%50]++;
        if(j-i+1==k)
        {
            int p=x;
            bool flag=false;
            vector<int> v1=temp;
            for(int i=0;i<=50;i++)
            {
                if(v1[i]>0) p-=v1[i];
                if(p<=0)
                {
                    ans.push_back(i-50);
                    flag=true;
                    break;
                }
            }
            if(!flag)
            ans.push_back(0);
            if(nums[i]<0)
            temp[(nums[i]+50)%50]--;
            i++;
        }
        j++;
    }
    return ans;
}