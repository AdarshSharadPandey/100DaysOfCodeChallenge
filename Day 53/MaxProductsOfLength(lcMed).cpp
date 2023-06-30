int maxProduct(vector<string>& words) 
{
    int ans = 0;
    vector<vector<int>> hash;
    for(string &str : words)
    {
        vector<int> alphabet(26,0);
        for(char &ch : str)
            alphabet[ch-'a']++;
        hash.push_back(alphabet);
    }
    int n = words.size();
    for(int i = 0; i < n-1; i++)
    {
        for(int j = i+1; j < n; j++)
        {
            vector<int> &v1 = hash[i];
            vector<int> &v2 = hash[j];
            int x;
            for(x = 0; x < 26; ++x)
                if(v1[x] > 0 && v2[x] > 0)
                    break;
            if(x == 26)
            {
                int prod = words[i].size() * words[j].size();
                ans = max(ans, prod);
            }
        }
    }
    return ans;
}