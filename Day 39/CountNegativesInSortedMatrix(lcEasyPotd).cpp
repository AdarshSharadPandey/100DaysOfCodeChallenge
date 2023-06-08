int countNegatives(vector<vector<int>>& grid) 
{
    int left = 0, right = 0, mid = 0, count = 0, sum= 0;
    for (int i = 0; i < grid.size(); i++) 
    {
        left = 0, count = 0, right = grid[i].size() - 1;
        while (left <= right) 
        {
            mid = left + (right - left) / 2;
            if (grid[i][mid] < 0) 
            {
                count = grid[i].size() - mid;
                right = mid - 1;
            } 
            else left = mid + 1;
        }
        sum += count;
    }
    return sum;
}