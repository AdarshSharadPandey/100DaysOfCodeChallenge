 int findMinOpeartion(vector<vector<int> > matrix, int n)
 {
     int maxColSum= 0,maxRowSum = 0;
     for(int i = 0;i<n;i++)
     {
        int colsum = 0, rowsum = 0;
         for(int j = 0;j<n;j++)
         {
             colsum += matrix[i][j];
             rowsum += matrix[j][i];
         }
         maxColSum = max(maxColSum,colsum);
         maxRowSum = max(maxRowSum,rowsum);
     }
     int maxi = max(maxRowSum,maxColSum);
     int ans = 0;
     for(int i = 0;i<n;i++)
     {
         int sum1 = 0;
         for(int j = 0;j<n;j++)
             sum1 += matrix[i][j];
         ans += abs(maxi-sum1);
     }
     return ans;
 }