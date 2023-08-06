void helper(int i, int n, vector<string>&ans, string &S)
{
    if(i==n)
    {
        ans.push_back(S);
        return;
    }
    for(int j=i; j<n; j++)
    {
        swap(S[i], S[j]);
        helper(i+1, n, ans, S);
        swap(S[i], S[j]);
    }
}
vector<string> permutation(string S)
{
    int n=S.size();
    if(n==0 || n==1) return {S}; 
    vector<string>ans;
    helper(0, n, ans, S);
    sort(ans.begin(), ans.end());
    return ans;
}