void transpose(vector<vector<int> >& matrix, int n)
{
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            if(i<j)
                swap(matrix[j][i],matrix[i][j]);
}