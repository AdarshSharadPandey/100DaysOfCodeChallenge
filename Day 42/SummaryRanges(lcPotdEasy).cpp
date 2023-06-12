vector<string> summaryRanges(vector<int>& arr) 
{
    int n=arr.size(),i=0,j=0;;
    vector<string> ans;
    if(n==1)
    {
        ans.push_back(to_string(arr[0]));
        return ans;
    }
    while(j<n-1)
    {
        if(arr[j]+1 == arr[j+1]) j++;
        else
        {
            if(i==j)  ans.push_back(to_string(arr[i])); 
            else ans.push_back(to_string(arr[i]) + "->" + to_string(arr[j]));
            i= ++j;
        }
    }
    if(j==n-1 && i!=j)
        ans.push_back(to_string(arr[i])+"->"+to_string(arr[j]));
    else if(j==n-1) ans.push_back(to_string(arr[j]));
    return ans;
}