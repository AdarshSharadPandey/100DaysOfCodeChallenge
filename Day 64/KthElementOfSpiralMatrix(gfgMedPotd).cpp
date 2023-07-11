int findK(int a[MAX][MAX],int n,int m,int k)
{
     int left=0, right=m-1, top=0, bottom=n-1, count=0, ans;
     while(1)
     {
         for(int i=left; i<=right; i++)
         {
             ans=a[top][i];
             count++;
             if(count==k)
             return ans;
         }
         top++;
         for(int i=top; i<=bottom; i++)
         {
             ans=a[i][right];
             count++;
             if(count==k)
             return ans;
         }
         right--;
         if(top<=bottom)
         {
             for(int i=right; i>=left; i--)
             {
                 ans=a[bottom][i];
                 count++;
                 if(count==k)
                 return ans;
             }
             bottom--;
         }
         if(left<=right)
         {
             for(int i=bottom; i>=top; i--)
             {
                 ans=a[i][left];
                 count++;
                 if(count==k)
                 return ans;
             }
             left++;
         }
     }
}