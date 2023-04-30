int powerfullInteger(int n,vector<vector<int>> &intervals,int k)
{
    vector<pair<int,int>> hash;
     for(int i=0;i<n;i++)
     {
       hash.push_back({intervals[i][0],1});
       hash.push_back({intervals[i][1]+1,-1});
     }
     sort(hash.begin(),hash.end());
     int sum=0,ans=-1;;
     for(int i=0;i<hash.size();i++)
     {
       if(sum>=k)ans=hash[i].first-1;
       sum+=hash[i].second;
   }
   return ans;
}