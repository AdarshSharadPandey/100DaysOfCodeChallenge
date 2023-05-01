int maxSatisfaction(vector<int>& satisfaction) 
{
    sort(satisfaction.begin(),satisfaction.end());
    int ans=0,temp=0;
    for(int i=satisfaction.size()-1;i>=0;i--)
    {
        if(satisfaction[i]+temp>=0)
        {
            temp+=satisfaction[i];
            ans+=temp;
        }
        else break;
    }
    return ans;
}