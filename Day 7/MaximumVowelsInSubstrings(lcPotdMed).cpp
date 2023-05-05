bool isvowel(char c)
{
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
        return true;
    return false;
}
int maxVowels(string s, int k) 
{
    int maxi=0,curr=0;
    for(int i=0;i<k;i++)
        if(isvowel(s[i])) 
            curr++;
    maxi=curr;
    for(int i=k;i<s.size();i++) 
    {
        if(isvowel(s[i-k])) curr--;
        if(isvowel(s[i])) curr++;
        maxi=max(maxi,curr);
    }
    return maxi;
}