int kthSmallest(vector<vector<int>>& mat, int k) 
{
    vector<int> row = mat[0];
    for(int i = 1; i < mat.size(); i++) 
    {
        vector<int> temp;
        for(int j = 0; j < mat[i].size(); j++) 
            for(auto n : row) 
                temp.push_back(mat[i][j] + n);
        sort(temp.begin(),temp.end());
        row.resize(min(k, int(temp.size())));
        for(int x = 0; x<min(k, int(temp.size()));x++) 
            row[x] = temp[x];
    }
    return row[k-1];
}