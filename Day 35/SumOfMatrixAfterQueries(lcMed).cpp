long long matrixSumQueries(int n, vector<vector<int>>& queries) 
{
    long sum = 0;
    int row = 0, col = 0;
    unordered_set<int> setRow;
    unordered_set<int> setCol;

    for (int i = queries.size() - 1; i >= 0; i--) \
    {
        if (queries[i][0] == 0) 
        {
            if (setRow.find(queries[i][1]) == setRow.end())
            {
                sum += (n - col) * queries[i][2];
                row += 1;
                setRow.insert(queries[i][1]);
            }
        } else if(setCol.find(queries[i][1]) == setCol.end()) 
            {
                sum += (n - row) * queries[i][2];
                col += 1;
                setCol.insert(queries[i][1]);
            }
        }
    }

    return sum;
}