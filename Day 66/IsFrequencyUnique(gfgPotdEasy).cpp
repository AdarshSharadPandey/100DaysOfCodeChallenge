bool isFrequencyUnique(int n, int arr[])
{
    unordered_map<int,int> hash;
    for(int i=0;i<n;i++) hash[arr[i]]++;
    vector<int> freq;
    for(auto i:hash) freq.push_back(i.second);
    sort(freq.begin(),freq.end());
    for(int i=1;i<freq.size();i++)
        if(freq[i]==freq[i-1])
            return false;
    return true;
}