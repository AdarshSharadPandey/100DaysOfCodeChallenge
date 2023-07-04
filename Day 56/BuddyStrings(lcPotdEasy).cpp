bool buddyStrings(string s, string goal) 
{
    unordered_map<char,int>hash;
    for(int i =0; i<s.size(); i++) hash[s[i]] = i;
    for(int i =0; i<goal.size(); i++)
    {
        if(hash.find(goal[i]) == hash.end()) return false;
        if(hash[goal[i]] != i)
        {
            swap(s[i], s[hash[goal[i]]]);
            if(s == goal) return true;
            swap(s[i], s[hash[goal[i]]]);
        }
    }
    return false;
}