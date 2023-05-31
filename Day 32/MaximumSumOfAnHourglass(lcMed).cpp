int maxSum(vector<vector<int>>& grid) 
{
    int row=grid.size(),col=grid[0].size(),result = 0;
	for (int r=0; r<row-2; r++) 
	{
		for (int c=0; c<col - 2; c++)
		{
			int sum = grid[r+0][c] + grid[r+0][c+1] + grid[r+0][c+2] + grid[r+1][c+1] 
							+ grid[r+2][c] + grid[r+2][c+1] + grid[r+2][c+2];
			result=max(result, sum);
		}
	}
	return result;
}