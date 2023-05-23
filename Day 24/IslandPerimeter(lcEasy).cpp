int dfs(int i, int j, vector<vector < int>> &grid, vector< vector< bool>> &vis)
{
    int row = grid.size();
    int col = grid[0].size();
    if (i < 0 || j < 0 || i >= row || j >= col) return 1;
    if (vis[i][j]) return 0;
    if (grid[i][j] == 0) return 1;
    vis[i][j] = true;
    int ans = dfs(i + 1, j, grid, vis) + dfs(i - 1, j, grid, vis) +
               dfs(i, j - 1, grid, vis) + dfs(i, j + 1, grid, vis);
    return ans;
}
int islandPerimeter(vector<vector < int>> &grid)
{
    int ans = 0, row = grid.size(), col = grid[0].size();
    vector<vector < bool>> vis(row, vector<bool> (col, false));
    for (int i = 0; i < row; i++)
        for (int j = 0; j < col; j++)
            if (grid[i][j] and !vis[i][j])
                ans += dfs(i, j, grid, vis);
    return ans;
}