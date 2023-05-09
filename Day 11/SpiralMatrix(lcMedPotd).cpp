vector<int> spiralOrder(vector<vector<int>>& matrix) 
{
    vector<int> answer;
    int maxCount=matrix.size()*matrix[0].size();
    for(int x=0;answer.size()<maxCount;x++) 
    {
        for(int j=x;j<matrix[0].size()-x; j++)
            answer.push_back(matrix[x][j]);
        for(int i=x+1;i<matrix.size()-x-1;i++)
            answer.push_back(matrix[i][matrix.front().size()-x-1]);
        for(int j = matrix.front().size()-x-1; j>=x && answer.size() < maxCount; j--)
            answer.push_back(matrix[matrix.size() - x - 1][j]);
        for(int i = matrix.size()-x-2;i>x && answer.size()<maxCount; i--)
            answer.push_back(matrix[i][x]);
    }
    return answer;
}