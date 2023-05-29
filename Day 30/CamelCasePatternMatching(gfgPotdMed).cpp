vector<string> CamelCase(int N, vector<string> Dictionary, string Pattern) 
{
    vector<string> ans;
    for(string s:Dictionary)
    { 
        string temp;
        for(char c:s)
        {
            if(c>='A'&&c<='Z') temp+=c;
        }
        for(int i=temp.size()-1;i>=0;i--)
        {
           if( Pattern==temp.substr(0,i+1))
           {
               ans.push_back(s);
               break;
           }
        }
    }
    if(ans.empty()) ans.push_back("-1");
    return ans;
}