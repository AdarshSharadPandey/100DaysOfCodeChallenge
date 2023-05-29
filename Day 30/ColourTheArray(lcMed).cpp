vector<int> colorTheArray(int n, vector<vector<int>>& queries) 
{
    vector<int> ans (queries.size()), nums(n+1,0);
    int count=0;
    for(int i=0;i<queries.size();i++)
    {   
        int index = queries[i][0], newcolor = queries[i][1], initial = nums[index];
        nums[index]=newcolor;
        if(initial==newcolor)
        {
            ans[i]=count;
            continue;
        }
        if(index!=0 && nums[index-1]!=0)
        {
            if(nums[index-1]==newcolor) count++;
            else if(nums[index-1]==initial) count--;
        }
        if(index<n && nums[index+1]!=0)
        {
            if(nums[index+1]==newcolor) count++;
            else if(nums[index+1]==initial) count--;
        }     
        ans[i]=count;
    }
    return ans;
}