string removeKdigits(string num, int k) 
{
    if(num.length() <= k) return "0";
    if(k == 0) return num;
    stack <char> s; 
    s.push(num[0]);
    string ans = "";
    for(int i=1;i<num.length();i++)
    {
        while(k > 0 && !s.empty() && num[i] < s.top()) s.pop(), k--;
        s.push(num[i]);
        if(s.size()==1 && num[i]=='0') s.pop();
    }
    while(k!=0 && !s.empty()) k--, s.pop();
    while(!s.empty())
    {
        ans.push_back(s.top());
        s.pop();
    }
    reverse(ans.begin(),ans.end());
    if(ans.size() == 0) return "0";
    return ans;
}