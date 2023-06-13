int equalPairs(vector<vector<int>>& grid)
{
    map<string, int> rowmap, colmap;
    int row = grid.size(), col = grid[0].size(), ans = 0;
    for (int i=0; i<row; i++) 
    {
        string rows, cols;
        for (int j=0; j<col; j++) 
        {
            rows += to_string(grid[i][j]) + "-";
            cols += to_string(grid[j][i]) + "-";
        }
        rowmap[rows]++;
        colmap[cols]++;
    }
    for (auto &it:rowmap) 
        if (colmap.find(it.first) != colmap.end()) 
            ans += (it.second * colmap[it.first]);
    return ans;
}