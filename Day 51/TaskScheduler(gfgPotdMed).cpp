int leastInterval(int N, int K, vector<char> &tasks) 
{
    vector<int> hash(26, 0);
    for(int i=0; i<N; i++)
        hash[tasks[i]-'A']++;
    int maxi = *max_element(hash.begin(), hash.end()), curr = 0;
    for(auto it: hash)
        if(it==maxi) curr++;
    return max(N,(maxi-1)*(K+1)+curr);
}