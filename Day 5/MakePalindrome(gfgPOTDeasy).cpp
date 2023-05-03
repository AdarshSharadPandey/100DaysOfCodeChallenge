bool makePalindrome(int n,vector<string> &arr)
{
    unordered_map<string,int> hash;
    for(int i=0;i<n;i++)
    {
        string str=arr[i];
        reverse(str.begin(),str.end());
        if(hash[str]>0 ) hash[str]--;
        else hash[arr[i]]++;
    }
    for(auto it : hash)
    {
        if(it.second>0)
        {
            string s=it.first;
            reverse(s.begin(),s.end());
            if(s!=it.first) return 0;
        }
    }
    
    return 1;
}