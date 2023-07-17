string FirstNonRepeating(string A)
{
   string ans="";
   unordered_map<char,int>freq;
   queue<char>currentFirstUnique;
   for(int i=0;i<A.size();i++)
   {
       freq[A[i]]++;
       if(freq[A[i]]==1) currentFirstUnique.push(A[i]);
       while(!currentFirstUnique.empty()&&freq[currentFirstUnique.front()]!=1)
           currentFirstUnique.pop();
       char curr='#';
       if(!currentFirstUnique.empty())
           curr=currentFirstUnique.front();
       ans+=curr;
   }
   return ans;
}