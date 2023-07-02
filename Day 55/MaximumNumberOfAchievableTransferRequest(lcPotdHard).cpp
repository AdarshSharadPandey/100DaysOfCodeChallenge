void helper(int i, vector<vector<int>>& requests,vector<int> &buildings,int count,int &ans)
{
    if(i==requests.size())
    {
        for(int i=0;i<buildings.size();i++) if(buildings[i]!=0) return;
        ans=max(ans,count);
        return ;
    }
    buildings[requests[i][0]]++;
    buildings[requests[i][1]]--;
    helper(i+1,requests,buildings,count+1,ans);
    buildings[requests[i][0]]--;
    buildings[requests[i][1]]++;
    helper(i+1,requests,buildings,count,ans);

}
int maximumRequests(int n, vector<vector<int>>& requests) 
{
    vector<int> buildings(n,0);
    int ans=0;
    helper(0,requests,buildings,0,ans);
    return ans;
}