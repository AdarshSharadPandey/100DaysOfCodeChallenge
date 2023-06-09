void helper(int i, string &s, vector<string>&ans) 
{
    if (i == s.length()) 
    {
        ans.push_back(s);
        return;
    }
    for (int idx = i; idx < s.length(); idx++)
    {
        if (idx > i && s[idx] == s[i]) continue;
        swap(s[idx], s[i]);
        helper(i + 1, s, ans);
    }
    for (int idx = s.length() - 1; idx > i; idx--)
        swap(s[i], s[idx]);
}
vector<string>find_permutation(string s) 
{
    sort(s.begin(), s.end());
    vector<string>ans;
    helper(0, s, ans);
    return ans;
}