string stringMirror(string str)
{
    string s="",ans;
    s+=str[0];
    for(int i=1;i<str.size();i++)
    {
        if(s[i-1]>str[i]) s+=str[i];
        else if(s[i-1]==str[i])
        {
            if(s.size()==1)break;
            s+=str[i];
        }
        else break;
    }
    ans+=s;
    reverse(s.begin(),s.end());
    ans+=s;
    return ans;
}