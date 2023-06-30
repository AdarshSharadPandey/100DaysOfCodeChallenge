int isDivisible(string s)
{
    vector<vector<int>> v={{0,1},{2,0},{1,2}};
    int curr=0;
    for(auto temp:s) curr=v[curr][temp-'0'];
    return !curr;
}