bool gotit(string sub,string s)
{
   if(sub==s) return false;
   string temp=sub;
   while(true)  
   {
       sub+=temp;
       if(sub.length()>=s.length()) break;
   }
   return sub==s;
}

bool repeatedSubstringPattern(string s) 
{
    string substring="";
    substring+=s[0];
    for(int i=1;i<s.size();i++)
    {
        if(s[i]!=s[0]) substring+=s[i];
        else if(gotit(substring,s)) return true;
        else substring+=s[i];
    }
    return false;
}