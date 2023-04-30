int firstCompleteIndex(vector<int>& arr, vector<vector<int>>& mat) 
{
    int m=mat.size(),n=mat[0].size();
    vector<int> row(m,n),col(n,m);
    unordered_map<int,pair<int,int>> hash;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            hash[mat[i][j]]={i,j};
        }
    }
    for(int i=0;i<arr.size();i++)
    {
        row[hash[arr[i]].first]--;
        col[hash[arr[i]].second]--;
        if(row[hash[arr[i]].first]==0 || col[hash[arr[i]].second]==0)
            return i;
    }
    return -1;
}