long long putMarbles(vector<int>& weights, int k) 
{
    long long n=weights.size(), sum1=weights[0]+weights[n-1];
    long long sum2=sum1;
    vector<long long> cuts;
    for(long long i=0;i<n-1;i++)
        cuts.push_back(weights[i]+weights[i+1]);
    sort(cuts.begin(),cuts.end());
    for(int i=0;i<k-1;i++)
    {
         sum1+=cuts[i];
         sum2+=cuts[cuts.size()-1-i];
    }
    return abs(sum1-sum2);
}