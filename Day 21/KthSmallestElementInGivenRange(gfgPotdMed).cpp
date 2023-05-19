vector<int>kthSmallestNum(int n, vector<vector<int>>&range, int q, vector<int>queries)
{
   sort(range.begin(),range.end());
   vector<int>ans;
   for(int i=0;i<queries.size();i++)
   {
       bool flag=0;
       for(int j=0;j<n;j++)
       {
           if(j!=0 and range[j-1][1]>range[j][0]) 
               queries[i]+=range[j-1][1]-range[j][0]+1;
           if(range[j][1]-range[j][0]+1<queries[i])
               queries[i]-=range[j][1]-range[j][0]+1;
           else
           {
               int t=range[j][0];
               ans.push_back(t+queries[i]-1);
               flag=1;
               break;
           }
       }
       if(!flag) ans.push_back(-1);
   }
   return ans;
}