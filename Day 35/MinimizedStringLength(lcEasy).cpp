int minimizedStringLength(string s) 
{
    int ans=0;
    int arr[26];
    for(int i=0;i<26;i++)
        arr[i]=0;
    for(int i=0;i<s.size();i++)
        arr[s[i]-'a']++;
    for(int i=0;i<26;i++)
        if(arr[i]>0)
            ans++;
    return ans;
}