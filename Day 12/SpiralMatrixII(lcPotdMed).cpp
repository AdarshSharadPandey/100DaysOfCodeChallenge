vector<vector<int>> generateMatrix(int n) 
{
   int k=1;
   vector<vector<int>> ans(n,vector<int> (n));
   int rl=0,cl=0,rh=n-1,ch=n-1;
   while(rl<=rh||cl<=ch)
   {
       for(int i=cl;i<=ch;i++)
           ans[rl][i]=k++;
       rl++;
       for(int i=rl;i<=rh;i++)
           ans[i][ch]=k++;
       ch--;
       for(int i=ch;i>=cl;i--)
           ans[rh][i]=k++;
       rh--;
       for(int i=rh;i>=rl;i--)
           ans[i][cl]=k++;
       cl++;
   }
   return ans;
}