string kthPermutation(int n, int k)
{
    string ans="";
    for(int i=1;i<=n;i++)
        ans+=to_string(i);
    for(int i=0;i<k-1;i++)
        next_permutation(ans.begin(),ans.end());
    return ans;
}