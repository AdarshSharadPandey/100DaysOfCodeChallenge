int klengthpref(string arr[], int n, int k, string str)
{    
    int ans=0;
    if(k>str.size()) return 0;
    string s=str.substr(0,k);
    for(int i=0;i<n;i++)
        if(arr[i].substr(0,k)==s)
            ans++;
    return ans;
}