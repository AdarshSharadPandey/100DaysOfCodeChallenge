vector<string> findRelativeRanks(vector<int>& score) 
{
    int n = score.size(), maxi = 0, rank = 0;;
    vector<string> ans(n);
    for(int i : score) maxi = max(maxi , i);
    vector<int> hash(maxi+1 , -1);
    for(int i=0; i<n; i++) hash[score[i]] = i;
    for(int i=maxi; i>=0; i--)
    {
        if(hash[i] != -1)
        {
            switch(rank)
            {
                case 0:
                    ans[hash[i]] = "Gold Medal";
                    break;
                case 1:
                    ans[hash[i]] = "Silver Medal";
                    break;
                case 2:
                    ans[hash[i]] = "Bronze Medal";
                    break;
                default:
                    ans[hash[i]] = to_string(rank+1);
                    break;
            }
            rank++;
        }
    }
    return ans;
}