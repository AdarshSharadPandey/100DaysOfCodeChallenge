void helper(vector<string> &ans,string digits,string mp[],string curr,int i)
{
    if(i==digits.size())
    {
        ans.push_back(curr);
        return;
    }
    int key=digits[i]-'0';
    for(int j=0;j<mp[key].size();j++)
    {
        curr.push_back(mp[key][j]);
        helper(ans,digits,mp,curr,i+1);
        curr.pop_back();
    }
}
vector<string> letterCombinations(string digits) 
{
    vector<string> ans;
    if(digits=="") return ans;
    string curr="";
    string mp[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    helper(ans,digits,mp,curr,0);
    return ans;
}