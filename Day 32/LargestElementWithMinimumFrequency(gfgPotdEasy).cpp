int LargButMinFreq(int arr[], int n) 
{
    int mini=INT_MAX;
    unordered_map<int,int> m;
    for(int i=0;i<n;i++)
        m[arr[i]]++;
    for(auto x:m)
        mini=min(mini,x.second);
    int maxi=INT_MIN;
    for(auto x:m)
        if(x.second==mini)
            maxi=max(maxi,x.first);
    return maxi;
}