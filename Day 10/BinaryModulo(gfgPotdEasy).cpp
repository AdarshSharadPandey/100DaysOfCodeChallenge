int modulo(string s,int m)
{
   int ans=0,t=1;
   for(int i=s.size()-1;i>=0;i--)
   {
        if(s[i]=='1') ans=(ans+t)%m;
        t=(t*2)%m;
   }
   ans=ans%m;
   return ans;
}