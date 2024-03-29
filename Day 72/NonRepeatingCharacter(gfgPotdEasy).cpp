char nonrepeatingCharacter(string S)
{
   unordered_map<char, int> hash;
   for(int i = 0; i < S.length(); i++) 
       hash[S[i]]++;
   for(int i = 0; i < S.length(); i++)
       if(hash[S[i]] == 1)
           return S[i];
   return '$';
}