long long largestSumCycle(int N, vector<int> edge)
{
    vector<int> vis(N,0);
    int ans=-1;
    for(int i=0; i<N; ++i) 
    {
        if(!vis[i]) 
        {
            set<int> ind;
            int sum=0;
            vector<pair<int,int>> pref;
            int j=i;
            while(1) 
            {
                if(j<0 or j>=N or edge[j]==-1) break;
                ind.insert(j);
                sum+=j;
                pref.push_back({j,sum});
                vis[j]=1;
                j=edge[j];
                if(vis[j]==1) 
                {
                    if(ind.find(j)!=ind.end()) 
                    {
                        int k;
                        for(k=0; k<pref.size(); ++k)
                            if(pref[k].first==j) 
                               break;
                        if(k==0) ans=max(ans,sum);
                        else ans=max(ans,sum-pref[k-1].second);
                        break;
                    }
                    else break;
                }
            }
        }
    }
    return ans;
}